// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "external/include/EuroScopePlugIn.h"
#include "EuroscopeAPI.h"

EuroscopeAPI* gpMyPlugin = NULL;

void    __declspec (dllexport)    EuroScopePlugInInit(EuroScopePlugIn::CPlugIn** ppPlugInInstance)
{
	// AFX_MANAGE_STATE(AfxGetStaticModuleState())

		// create the instance
	*ppPlugInInstance = gpMyPlugin = new EuroscopeAPI();
}


//---EuroScopePlugInExit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInExit(void)
{
	// AFX_MANAGE_STATE(AfxGetStaticModuleState())

		// delete the instance
	delete gpMyPlugin;
}

