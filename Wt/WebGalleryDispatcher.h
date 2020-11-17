#pragma once
#include "InternalTypes.h"
#include "Dispatcher.h"

class WebGalleryDispatcher : public Dispatcher
{
public:
	using Dispatcher::Dispatcher;
	std::unique_ptr<Wt::WTemplate> Dispatch(const VIEWREQUEST&) override;
};