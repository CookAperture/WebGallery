#pragma once
#include <Wt/WAnchor.h>
#include <Wt/WApplication.h>
#include <Wt/WString.h>
#include "InternalTypes.h"

class WWebGallery : public Wt::WApplication {
private:
    Wt::WString appName{};
    std::unique_ptr<Wt::WTemplate> mainTemplate{};
    void OnLineEditEnterPressed();

public:
    WWebGallery(const Wt::WEnvironment&);
    void onInternalPathChange();
    void UpdatePage();
    void SetHome();
    void SetTesty();

};