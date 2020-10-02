#pragma once
#include <memory>
#include <map>
#include <vector>

#include <Wt/WCssStyleSheet.h>
#include <Wt/WFileResource.h>
#include <Wt/WPushButton.h>
#include <Wt/WLineEdit.h>
#include <Wt/WContainerwidget.h>
#include <Wt/WLink.h>
#include <Wt/WText.h>
#include <Wt/WMessageResourceBundle.h>
#include <Wt/WTemplate.h>
#include <Wt/WSignal.h>
#include <Wt/WApplication.h>
#include <Wt/WString.h>

enum struct VIEWREQUEST
{
	HOME = 0,
	TESTY
};