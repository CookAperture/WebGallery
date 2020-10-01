#include "BasicSceleton.h"
#include <Wt/WCssStyleSheet.h>
#include <Wt/WFileResource.h>

ControlExample::ControlExample(const Wt::WEnvironment& env)
    : WApplication(env)
{
    //ressource init
    appName = "Basic Skeleton";
    messageResourceBundle().use(appRoot() + "xml/main");
    useStyleSheet("main.css");

    //main init
    setTitle(appName);
    internalPathChanged().connect(this, &ControlExample::onInternalPathChange);
    SetHome();
}

void ControlExample::onInternalPathChange() //navigate
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

inline void ControlExample::UpdatePage()
{
    root()->clear();
    root()->setStyleClass("external");
    root()->addWidget(std::move(mainTemplate));
}

// { EventListener
void ControlExample::OnLineEditEnterPressed()
{
    appName += " Changed";
    setTitle(appName);
}
// }


void ControlExample::SetHome()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/testy" };
    link.setInternalPath("/testy");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    lineEdit->enterPressed().connect(std::bind(&ControlExample::OnLineEditEnterPressed, this));
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

void ControlExample::SetTesty()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/" };
    link.setInternalPath("/");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    lineEdit->enterPressed().connect(std::bind(&ControlExample::OnLineEditEnterPressed, this));
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
