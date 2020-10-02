#include "InternalTypes.h"
#include "WWebGallery.h"
#include "WebGalleryDispatcher.h"
#include "HomeView.h"
#include "TestyView.h"

std::unique_ptr<Wt::WApplication> WApplicationCreator(const Wt::WEnvironment& env)
{
    std::map<const VIEWREQUEST, View*> views
    {
        {VIEWREQUEST::HOME, &HomeView()},
        {VIEWREQUEST::TESTY, &TestyView()}
    };

    return std::make_unique<WWebGallery>(env, &WebGalleryDispatcher{ views });
}

int main(int argc, char** argv) 
{
    return Wt::WRun(argc, argv, WApplicationCreator);
}