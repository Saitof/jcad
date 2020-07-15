///////////////////////////////////////////////////////////////////////////////
// NC作成シミュレーションプロトタイプ宣言
// NCSM32_Api.h
//-----------------------------------------------------------------------------
// LastEdit: 2010/03/30 by M.Fukushima
///////////////////////////////////////////////////////////////////////////////
#ifndef ___NCSM_H
#define ___NCSM_H

int WINAPI SimulateMakeNC(OBJTYPE *bop, PNTTYPE *vtx, int *flp,
                          const char *name, const char* pname);			// NC作成ｼﾐｭﾚｰｼｮﾝ

#endif ___NCSM_H

//============================<EOF:NCSM32_Api.h>=============================