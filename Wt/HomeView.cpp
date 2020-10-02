#include "HomeView.h"

std::unique_ptr<Wt::WTemplate> HomeView::RenderView()
{
    return CreateView();
}

// { EventListener
void HomeView::OnLineEditEnterPressed()
{
    //Handle Event
}
// }

std::unique_ptr<Wt::WTemplate> HomeView::CreateView()
{
    std::unique_ptr<Wt::WTemplate> mainTemplate{};

    Wt::WLink link{ Wt::LinkType::InternalPath, "/testy" };
    link.setInternalPath("/testy");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    lineEdit->enterPressed().connect(std::bind(&HomeView::OnLineEditEnterPressed, this));
    mainTemplate->bindWidget("name-edit", std::move(lineEdit));

    auto nextButton = std::make_unique<Wt::WPushButton>("Next Page");
    nextButton->setLink(link);
    nextButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("next-button", std::move(nextButton));

    auto previousButton = std::make_unique<Wt::WPushButton>("Previous Page");
    previousButton->setLink(link);
    previousButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("previous-button", std::move(previousButton));

    return std::move(mainTemplate);
}
