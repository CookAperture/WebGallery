#include "InternalTypes.h"
#include "WWebGallery.h"
#include "WebGalleryDispatcher.h"
#include "HomeView.h"
#include "TestyView.h"

std::unique_ptr<Wt::WApplication> WApplicationCreator(const Wt::WEnvironment& env)
{
    std::map<const VIEWREQUEST, std::shared_ptr<View>> sample{ {VIEWREQUEST::HOME, std::make_shared<HomeView>()}, {VIEWREQUEST::TESTY, std::make_shared<TestyView>()} };
    auto views = std::make_unique<std::map<const VIEWREQUEST, std::shared_ptr<View>>>(std::move(sample));
    auto patcher = std::make_unique<WebGalleryDispatcher>(std::move(views));

    return std::move(std::make_unique<WWebGallery>(env, std::move(patcher)));
}

int main(int argc, char** argv) 
{
    return Wt::WRun(argc, argv, WApplicationCreator);
}