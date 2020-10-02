#pragma once
class Dispatcher
{
public:
	virtual std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) = 0;
private:
	//Views
};