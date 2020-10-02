#pragma once
#include "InternalTypes.h"
#include "Dispatcher.h"

class WebGalleryDispatcher : public Dispatcher
{
public:
	std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) override;
	using Dispatcher::Dispatcher;
private:
	//Views as a Map
};