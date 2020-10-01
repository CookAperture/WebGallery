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

class ControlExample : public Wt::WApplication {
private:
    std::string appName{};
    std::unique_ptr<Wt::WTemplate> mainTemplate{};

public:
    ControlExample(const Wt::WEnvironment&);
    void onInternalPathChange();
    void UpdatePage();
    void SetHome();
    void SetTesty();

};