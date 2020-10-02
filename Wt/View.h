#pragma once
#include "View.h"
#include "InternalTypes.h"

class View
{
public:
	virtual std::unique_ptr<Wt::WTemplate> RenderView() = 0; //maybe return a WWidgetContainer as Page
private:
	
};