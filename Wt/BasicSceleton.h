#pragma once
#include <Wt/WAnchor.h>
#include <Wt/WApplication.h>
#include <Wt/WContainerwidget.h>
#include <Wt/WLink.h>
#include <Wt/WText.h>
#include <Wt/WMessageResourceBundle.h>
#include <Wt/WTemplate.h>
#include <Wt/WString.h>
#include <Wt/WPushButton.h>
#include <Wt/WLineEdit.h>
#include <memory>

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