/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Input Method Manager
 #	author : miyako
 #	2016/06/28
 #
 # --------------------------------------------------------------------------------*/

#if VERSIONWIN
#include <windows.h>
#include <Imm.h>
#pragma comment(lib, "imm32.lib")
#endif

// --- Imm Context
void IM_Associate(sLONG_PTR *pResult, PackagePtr pParams);
void IM_Disassociate(sLONG_PTR *pResult, PackagePtr pParams);

// --- Imm Status
void IM_Get_mode(sLONG_PTR *pResult, PackagePtr pParams);
void IM_Set_mode(sLONG_PTR *pResult, PackagePtr pParams);
