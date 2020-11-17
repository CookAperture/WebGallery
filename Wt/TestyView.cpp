#include "TestyView.h"

std::unique_ptr<Wt::WTemplate> TestyView::RenderView() const
{
    return CreateView();
}

// { EventListener
inline void TestyView::OnLineEditEnterPressed(Wt::WLineEdit& lineEdit)
{
    lineEdit.setPlaceholderText("Now on Page Testy");
}
// }

std::unique_ptr<Wt::WTemplate> TestyView::CreateView() const
{
    auto mainTemplate = std::make_unique<Wt::WTemplate>(xml);

    auto lineEdit = std::make_unique<Wt::WLineEdit>();
    lineEdit->setMaxLength(256);
    mainTemplate->bindWidget("name-edit", std::move(lineEdit));

    auto nextButton = std::make_unique<Wt::WPushButton>("Next Page");
    nextButton->clicked().connect(std::bind(request_, VIEWREQUEST::HOME));
    nextButton->setToolTip("Redirects to Home");
    mainTemplate->bindWidget("next-button", std::move(nextButton));

    auto previousButton = std::make_unique<Wt::WPushButton>("Previous Page");
    previousButton->clicked().connect(std::bind(request_, VIEWREQUEST::HOME));
    previousButton->setToolTip("Redirects to Home");
    mainTemplate->bindWidget("previous-button", std::move(previousButton));

    return std::move(mainTemplate);
}

