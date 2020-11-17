#pragma once
#include "View.h"
#include "HomeView.h"
#include "TestyView.h"

class Dispatcher
{
public:
	Dispatcher() : views{
			{VIEWREQUEST::HOME, std::make_shared<HomeView>()},
			{VIEWREQUEST::TESTY, std::make_shared<TestyView>()}}
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
	std::map<const VIEWREQUEST, std::shared_ptr<View>> views;
};