#pragma once
#include "InternalTypes.h"
#include "View.h"

class TestyView : public View
{
public:
	using View::View;
	std::unique_ptr<Wt::WTemplate> RenderView() const override;
private:
	inline void OnLineEditEnterPressed(Wt::WLineEdit&);
	std::unique_ptr<Wt::WTemplate> CreateView() const;
};