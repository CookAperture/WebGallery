#pragma once
#include "InternalTypes.h"
#include "FrontController.h"
#include "Dispatcher.h"

class WWebGallery : public Wt::WApplication, public FrontController {
public:
    WWebGallery(const Wt::WEnvironment&, std::unique_ptr<Dispatcher>);
    void DispatchRequest(const VIEWREQUEST&) override;
    void UpdatePage();
private:
    Wt::WString appName{};
    std::unique_ptr<Wt::WTemplate> actualPage{};

    std::unique_ptr<Dispatcher> dispatcher;
    void Init();
};