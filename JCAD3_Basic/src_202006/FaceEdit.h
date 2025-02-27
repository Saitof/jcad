/////////////////////////////////////////////////////////////////////////////
// 基準面編集 演算部プロトタイプ宣言
// FaceEdit.h
//---------------------------------------------------------------------------
// LastEdit : 2010/01/20 by M.Fukushima
/////////////////////////////////////////////////////////////////////////////
void ObjectSurfaceEdit(void);											// 曲面指定移動
void ObjectAdjustCP(int, int, PNTTYPE*, int*, PNTTYPE*, PNTTYPE*,
                    PNTTYPE*, PNTTYPE*, PNTTYPE*, int*, int*, int*);	// 制御点立体合わせ
void ObjectAdjust(void);												// 曲面立体合わせ

//==============================<EOF:FaceEdit.h>=============================