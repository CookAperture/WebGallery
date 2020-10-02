#include "InternalTypes.h"
#include "WWebGallery.h"
#include "WebGalleryDispatcher.h"

std::unique_ptr<Wt::WApplication> WApplicationCreator(const Wt::WEnvironment& env)
{
    WWebGallery app{env, WebGalleryDispatcher()};
    return std::make_unique<WWebGallery>(app);
}

int main(int argc, char** argv) 
{
    return Wt::WRun(argc, argv, WApplicationCreator);
}