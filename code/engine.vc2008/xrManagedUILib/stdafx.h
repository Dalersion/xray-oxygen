#pragma once

#ifdef MANAGED_UI_BUILD
#define MANAGED_UI_API __declspec(dllexport)
#else
#define MANAGED_UI_API __declspec(dllimport)
#endif

#include "../xrEngine/stdafx.h"
#include "../xrEngine/GameFont.h"
#include "../xrCDB/xrCDB.h"

#undef SendMessage
#include <vcclr.h>

#include "xrManagedLib/HelperFuncs.h"
#include "../xrServerEntities/smart_cast.h"
#include "xrManagedEngineLib/HelpfulMacro.h"