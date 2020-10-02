#pragma once
#include "View.h"
class Dispatcher
{
public:
	virtual std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) = 0;
	virtual void SetViews(const std::map<const VIEWREQUEST, const View*>& views)
	{
		this->views = views;
	}
private:
	std::map<const VIEWREQUEST, const View*> views;
};