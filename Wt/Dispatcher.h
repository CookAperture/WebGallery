#pragma once
#include "View.h"
class Dispatcher
{
public:
	Dispatcher(const std::map<const VIEWREQUEST, View*>& views)
		: views(views)
	{}
	virtual std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) = 0;
	virtual void ConnectViews(std::function<void(VIEWREQUEST)> onRequest)
	{
		for (auto& view : views)
			view.second->request_ = onRequest;
	}
	virtual void SetTemplates(const Wt::WString& xmlTemplate)
	{
		for (auto& view : views)
			view.second->SetTemplate(xmlTemplate);
	}
protected:
	std::map<const VIEWREQUEST, View*> views;
};