#pragma once
#include "View.h"
class Dispatcher
{
public:
	Dispatcher(std::unique_ptr<std::map<const VIEWREQUEST, std::shared_ptr<View>>> views)
		: views(std::move(views))
	{}
	virtual std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) = 0;
	virtual void ConnectViews(std::function<void(VIEWREQUEST)> onRequest)
	{
		for (auto& view : *views)
			view.second->request_ = std::move(onRequest);
	}
	virtual void SetTemplates(const Wt::WString& xmlTemplate)
	{
		for (auto& view : *views)
			view.second->SetTemplate(xmlTemplate);
	}
protected:
	std::unique_ptr<std::map<const VIEWREQUEST, std::shared_ptr<View>>> views;
};