#pragma once
#include "View.h"
#include "InternalTypes.h"

class View
{
public:
	virtual std::unique_ptr<Wt::WTemplate> RenderView() const = 0;
	std::function<void(VIEWREQUEST)> request_;
	void SetTemplate(const Wt::WString& xml) 
	{
		this->xml = xml;
	}
protected:
	Wt::WString xml;
};