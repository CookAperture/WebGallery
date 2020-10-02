#include "WWebGallery.h"

void WWebGallery::Init()
{
}

WWebGallery::WWebGallery(const Wt::WEnvironment& env, const Dispatcher& disp)
    : WApplication(env), dispatcher(&disp)
{
    //ressource init
    appName = "Web Gallery";
    messageResourceBundle().use(appRoot() + "xml/main");
    useStyleSheet("main.css");

    //main init
    setTitle(appName);
    internalPathChanged().connect(this, &WWebGallery::onInternalPathChange);
}

void WWebGallery::DispatchRequest()
{
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
