#include "BasicSceleton.h"
#include <Wt/WCssStyleSheet.h>
#include <Wt/WFileResource.h>

WWebGallery::WWebGallery(const Wt::WEnvironment& env)
    : WApplication(env)
{
    //ressource init
    appName = "Basic Skeleton";
    messageResourceBundle().use(appRoot() + "xml/main");
    useStyleSheet("main.css");

    //main init
    setTitle(appName);
    internalPathChanged().connect(this, &WWebGallery::onInternalPathChange);
    SetHome();
}

void WWebGallery::onInternalPathChange() //navigate
{
    if (internalPath() == "/")
        SetHome();
    else if (internalPath() == "/testy")
        SetTesty();
    else
    {
        SetHome();
        setInternalPath("/");
    }
}

inline void WWebGallery::UpdatePage()
{
    root()->clear();
    root()->setStyleClass("external");
    root()->addWidget(std::move(mainTemplate));
}

// { EventListener
void WWebGallery::OnLineEditEnterPressed()
{
    appName += " Changed";
    setTitle(appName);
}
// }


void WWebGallery::SetHome()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/testy" };
    link.setInternalPath("/testy");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    lineEdit->enterPressed().connect(std::bind(&WWebGallery::OnLineEditEnterPressed, this));
    mainTemplate->bindWidget("name-edit", std::move(lineEdit));

    auto nextButton = std::make_unique<Wt::WPushButton>("Next Page");
    nextButton->setLink(link);
    nextButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("next-button", std::move(nextButton));

    auto previousButton = std::make_unique<Wt::WPushButton>("Previous Page");
    previousButton->setLink(link);
    previousButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("previous-button", std::move(previousButton));

    UpdatePage();
}

void WWebGallery::SetTesty()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/" };
    link.setInternalPath("/");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    lineEdit->enterPressed().connect(std::bind(&WWebGallery::OnLineEditEnterPressed, this));
    lineEdit->setPlaceholderText("Now on Page Testy");
    mainTemplate->bindWidget("name-edit", std::move(lineEdit));

    auto nextButton = std::make_unique<Wt::WPushButton>("Next Page");
    nextButton->setLink(link);
    nextButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("next-button", std::move(nextButton));

    auto previousButton = std::make_unique<Wt::WPushButton>("Previous Page");
    previousButton->setLink(link);
    previousButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("previous-button", std::move(previousButton));

    UpdatePage();
}
