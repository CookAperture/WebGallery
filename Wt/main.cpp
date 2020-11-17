#include "InternalTypes.h"
#include "WWebGallery.h"
#include "WebGalleryDispatcher.h"

std::unique_ptr<Wt::WApplication> WApplicationCreator(const Wt::WEnvironment& env)
{
    return std::move(std::make_unique<WWebGallery>(env, std::make_unique<WebGalleryDispatcher>()));
}

int main(int argc, char** argv) 
{
    return Wt::WRun(argc, argv, WApplicationCreator);
}