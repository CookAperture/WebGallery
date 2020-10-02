#pragma once
class FrontController
{
public:
	//userAuth
	virtual void DispatchRequest(const VIEWREQUEST&) = 0;
private:
	//Dispatcher
};