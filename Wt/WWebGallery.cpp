#include "WWebGallery.h"


void WWebGallery::Init()
{
    dispatcher->ConnectViews(std::bind(&WWebGallery::DispatchRequest, this, std::placeholders::_1));
    dispatcher->SetTemplates(Wt::WString::tr("main")); 
    //for different keys it has to be read from the keys() func -> thus the enum has to represent with strings so for every available key the correct enum is set in a vec -> is applyed (fallback should alwayd be the main)
    DispatchRequest(VIEWREQUEST::HOME);
}

WWebGallery::WWebGallery(const Wt::WEnvironment& env, std::unique_ptr<Dispatcher> disp)
    : WApplication(env), dispatcher(std::move(disp))
{
    //ressource init
    appName = "Web Gallery";
    //useStyleSheet("main.css");
    messageResourceBundle().use(appRoot() + "xml/main");
    Init();
    //main init
    setTitle(appName);
}

void WWebGallery::DispatchRequest(const VIEWREQUEST& request)
{
    actualPage = dispatcher.get()->Dispatch(request);
    UpdatePage();
}

inline void WWebGallery::UpdatePage()
{
    root()->clear();
    root()->addWidget(std::move(actualPage));
}
