#pragma once
#include "View.h"
#include "InternalTypes.h"

class View //needs Event to Invoke Path Changed !! -> another page is requested!! | alternativly emit path changed event??
{
public:
	View(const std::string& path)
	{
		messageResourceBundle.use(path);
	};
	virtual std::unique_ptr<Wt::WTemplate> RenderView() const = 0; //maybe return a WWidgetContainer as Page
private:
	Wt::WMessageResourceBundle messageResourceBundle{};
};