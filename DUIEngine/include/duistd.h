#include "duidef.h"

#ifdef DLL_DUI
# ifdef DUIENGINE_EXPORTS
# pragma message("dll export")
#  define DUI_EXP __declspec(dllexport)
# else
#  define DUI_EXP __declspec(dllimport)
# endif // DUIENGINE_EXPORTS
#else
#define DUI_EXP
#endif


# pragma warning(disable:4661)
# pragma warning(disable:4251)
# pragma warning(disable:4100)	//unreferenced formal parameter

#include <Windows.h>
#include <CommCtrl.h>
#include <Shlwapi.h>
#include <OleCtl.h>
#include <tchar.h>
#include <stdio.h>

//export pugixml interface
#include "../dependencies/pugixml/pugixml.hpp"

#include "DuiUtilities.h"

#ifdef USING_ATL
	#define _COLL_NS	ATL
	#include <atlbase.h>
	#include <atlapp.h>
	#include <atlmisc.h>
	#include <atlgdi.h>
	#include <atlstr.h>
	#include <atlcoll.h>
	#include <atlcomcli.h>
	#define CDuiComPtr	CComPtr
	#define CDuiComQIPtr	CComQIPtr

	#include "wtl.mini/duicrack.h"
	#define CDuiArray	CAtlArray
	#define CDuiList	CAtlList
	#define CDuiMap		CAtlMap
	#define CDuiStringA	CAtlStringA
	#define CDuiStringW CAtlStringW
	#define CDuiStringT CAtlString
	#define DUI_CA2A	CA2A
	#define DUI_CA2W	CA2W
	#define DUI_CW2A	CW2A
	#define DUI_CA2T	CA2T
	#define DUI_CW2T	CW2T
	#define DUI_CT2A	CT2A
	#define DUI_CT2W	CT2W
#else//ATL_FREE
	#define _WTYPES_NS DuiEngine
	#define _COLL_NS	DuiEngine
	#include "wtl.mini/duicrack.h"
	#include "wtl.mini/duimisc.h"
	#include "wtl.mini/duigdi.h"
// 	#include "wtl.mini/duistr.h" 
	#include "wtl.mini/tstring.h" 
	#include "wtl.mini/strcpcvt.h"
	#include "wtl.mini/duicoll.h"
	#include "atl.mini/atldef.h"
	#include "atl.mini/duicomcli.h"

#endif//USING_ATL


#include "DuiAttrCrack.h"

#pragma comment(lib,"Msimg32.lib")
#pragma comment(lib,"shlwapi.lib")