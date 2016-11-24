
// ADO.h : §Ô§Ý§Ñ§Ó§ß§í§Û §æ§Ñ§Û§Ý §Ù§Ñ§Ô§à§Ý§à§Ó§Ü§Ñ §Õ§Ý§ñ §á§â§Ú§Ý§à§Ø§Ö§ß§Ú§ñ PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "§Ó§Ü§Ý§ð§é§Ú§ä§î stdafx.h §Õ§à §Ó§Ü§Ý§ð§é§Ö§ß§Ú§ñ §ï§ä§à§Ô§à §æ§Ñ§Û§Ý§Ñ §Ó PCH"
#endif

#include "resource.h"		// §à§ã§ß§à§Ó§ß§í§Ö §ã§Ú§Þ§Ó§à§Ý§í


// CADOApp:
// §° §â§Ö§Ñ§Ý§Ú§Ù§Ñ§è§Ú§Ú §Õ§Ñ§ß§ß§à§Ô§à §Ü§Ý§Ñ§ã§ã§Ñ §ã§Þ. ADO.cpp
//

class CADOApp : public CWinApp
{
public:
	CADOApp();

// §±§Ö§â§Ö§à§á§â§Ö§Õ§Ö§Ý§Ö§ß§Ú§Ö
public:
	virtual BOOL InitInstance();

// §²§Ö§Ñ§Ý§Ú§Ù§Ñ§è§Ú§ñ

	DECLARE_MESSAGE_MAP()
};

extern CADOApp theApp;