#pragma once
#include <Wt/WAnchor.h>
#include <Wt/WApplication.h>
#include <Wt/WString.h>
#include "InternalTypes.h"
#include "FrontController.h"
#include "Dispatcher.h"

class WWebGallery : public Wt::WApplication, public FrontController {
private:
    Wt::WString appName{};
    std::unique_ptr<Wt::WTemplate> actualPage{};

    Dispatcher* dispatcher;
    void Init();
public:
    WWebGallery(const Wt::WEnvironment&, Dispatcher&);
    void DispatchRequest() override;
    void onInternalPathChange();
    void UpdatePage();
};