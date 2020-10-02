#include "HomeView.h"

std::unique_ptr<Wt::WTemplate> HomeView::RenderView() const
{
    return CreateView();
}

// { EventListener
inline void HomeView::OnLineEditEnterPressed(Wt::WLineEdit& lineEdit)
{
    lineEdit.setPlaceholderText("Now on Page Testy");
}
// }

std::unique_ptr<Wt::WTemplate> HomeView::CreateView() const
{
    std::unique_ptr<Wt::WTemplate> mainTemplate{};

    Wt::WLink link{ Wt::LinkType::InternalPath, "/testy" };
    link.setInternalPath("/testy");

    auto temp = Wt::WString::tr("main");
    mainTemplate = std::make_unique<Wt::WTemplate>(temp);

    auto lineEdit = Wt::WLineEdit();
    lineEdit.setMaxLength(256);
    lineEdit.enterPressed().connect(std::bind(&HomeView::OnLineEditEnterPressed, this, lineEdit));
    mainTemplate->bindWidget("name-edit", std::make_unique<Wt::WLineEdit>(lineEdit));

    Wt::WPushButton nextButton{"Next Page"};
    nextButton.setLink(link);
    nextButton.setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("next-button", std::make_unique<Wt::WPushButton>(nextButton));

    auto previousButton = std::make_unique<Wt::WPushButton>("Previous Page");
    previousButton->setLink(link);
    previousButton->setToolTip("Redirects to Testy");
    mainTemplate->bindWidget("previous-button", std::move(previousButton));

    return std::move(mainTemplate);
}
