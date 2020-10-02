#include "WWebGallery.h"
#include "HomeView.h"
#include "TestyView.h"

void WWebGallery::Init()
{
    std::map<const VIEWREQUEST, const View*> views
    {
        {VIEWREQUEST::HOME, &HomeView(appRoot() + "xml/main")},
        {VIEWREQUEST::TESTY, &TestyView(appRoot() + "xml/main")}
    };

    dispatcher->SetViews(views);
}

WWebGallery::WWebGallery(const Wt::WEnvironment& env, Dispatcher& disp)
    : WApplication(env), dispatcher(&disp)
{
    //ressource init
    appName = "Web Gallery";
    useStyleSheet("main.css");
    Init();
    //main init
    setTitle(appName);
    internalPathChanged().connect(this, &WWebGallery::onInternalPathChange);
}

void WWebGallery::DispatchRequest()
{
    dispatcher->Dispatch(); //retrieve event (request from a view)
}

void WWebGallery::onInternalPathChange() //navigate
{
    if (internalPath() == "/")
        ;//ReactOnChangedPath
    else if (internalPath() == "/testy")
        ;//ReactOnChangedPath
    else
    {
        //FallBack
        setInternalPath("/");
    }
}

inline void WWebGallery::UpdatePage()
{
    root()->clear();
    root()->setStyleClass("external");
    root()->addWidget(std::move(actualPage));
}
