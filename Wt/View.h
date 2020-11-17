#pragma once
#include "View.h"
#include "InternalTypes.h"

class View
{
public:
	virtual ~View() = default;
	virtual std::unique_ptr<Wt::WTemplate> RenderView() const = 0;
	void SetTemplate(const Wt::WString& xml) 
	{
		this->xml = xml;
	}

	std::function<void(VIEWREQUEST)> request_;

protected:
	Wt::WString xml;
};