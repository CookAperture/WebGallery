#pragma once
#include "InternalTypes.h"
#include "View.h"

class HomeView : public View
{
public:
	std::unique_ptr<Wt::WTemplate> RenderView() override;
private:
	void OnLineEditEnterPressed();
	std::unique_ptr<Wt::WTemplate> CreateView();
};