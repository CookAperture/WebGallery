#include "WebGalleryDispatcher.h"

std::unique_ptr<Wt::WTemplate> WebGalleryDispatcher::Dispatch(const VIEWREQUEST& request)
{
	return views[request]->RenderView();
}
