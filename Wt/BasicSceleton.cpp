#include "BasicSceleton.h"

ControlExample::ControlExample(const Wt::WEnvironment& env)
    : WApplication(env)
{
    //ressource init
    appName = "Basic Skeleton";
    messageResourceBundle().use(appRoot() + "xml/main");

    //main init
    setTitle(appName);
    internalPathChanged().connect(this, &ControlExample::onInternalPathChange);
    SetHome();
}

void ControlExample::onInternalPathChange() //navigate
{
    if (internalPath() == "/")
        SetHome();
    else if (internalPath() == "/page")
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
    root()->addWidget(std::move(mainTemplate));
}

void ControlExample::SetHome()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/testy" };
    link.setInternalPath("/testy");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    //mainTemplate.bindWidget("", std::make_unique<Wt::WAnchor>(std::move(link), "<strong>Page</strong>"));

    mainTemplate->bindWidget("name-edit", Wt::cpp14::make_unique<Wt::WLineEdit>());
    mainTemplate->bindWidget("save-button", Wt::cpp14::make_unique<Wt::WPushButton>("Save"));
    mainTemplate->bindWidget("cancel-button", Wt::cpp14::make_unique<Wt::WPushButton>("Cancel"));

    UpdatePage();
}

void ControlExample::SetTesty()
{
    Wt::WLink link{ Wt::LinkType::InternalPath, "/" };
    link.setInternalPath("/");

    mainTemplate->setTemplateText(Wt::WString::tr("main"));

    //std::unique_ptr<Wt::WAnchor> a = std::make_unique<Wt::WAnchor>(std::move(link), "<strong>Page</strong>");

    mainTemplate->bindWidget("name-edit", Wt::cpp14::make_unique<Wt::WLineEdit>());
    mainTemplate->bindWidget("save-button", Wt::cpp14::make_unique<Wt::WPushButton>("SaveTesty"));
    mainTemplate->bindWidget("cancel-button", Wt::cpp14::make_unique<Wt::WPushButton>("CancelTesty"));

    UpdatePage();
}
