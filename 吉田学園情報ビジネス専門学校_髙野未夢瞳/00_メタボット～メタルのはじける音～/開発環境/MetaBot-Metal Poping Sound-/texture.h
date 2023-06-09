//**************************************************
// 
// texture.h
// Author  : katsuki mizuki
// 
//**************************************************
#ifndef _TEXTURE_H_	//このマクロ定義がされてなかったら
#define _TEXTURE_H_	//２重インクルード防止のマクロ定義

//==================================================
// インクルード
//==================================================
#include <d3dx9.h>

//==================================================
// 定義
//==================================================
class CTexture
{
public: /* 定義 */
	enum TEXTURE
	{
		TEXTURE_NONE = -1,					// 使用しない
		TEXTURE_TITLE = 0,					// タイトル
		TEXTURE_SCORE,						// ナンバー
		TEXTURE_UI,							// ユーザーインターフェース
		TEXTURE_UI_PLAYERDATA,				// ユーザーデータインターフェース
		TEXTURE_RESULT,						// リザルト
		TEXTURE_RESULT_DEATH,				// 死亡時のリザルト
		TEXTYRE_RANKING_BG,					// ランキングの背景
		TEXTURE_RANKING_BUMMBER,			// ランキングの位
		TEXTURE_RANKING_NOW_UI,
		TEXTURE_SKY,						// スカイボックスに貼る
		TRXTURE_EFFECT,						// エフェクト用
		TEXTURE_DAMAGE_INSIGNIFICANT,		// ダメージ(軽微)
		TEXTURE_HALF_DAMAGE,				// ダメージ(中破)
		TEXTURE_SERIOUS_DAMAGE,				// ダメージ(大破寸前)
		TEXTURE_TUTORIAL,					// チュートリアル
		TEXTURE_EAT_ME,						// チュートリアル
		TEXTURE_DISCRIPTION,				// チュートリアル
		TEXTURE_ARROW,						// チュートリアル
		TEXTURE_DISCRIPTION2,				// チュートリアル
		TEXTURE_TITLE_LOGO,					// チュートリアル
		TEXTURE_RESULT_LOGO,				// チュートリアル
		TEXTURE_MAX,						// 最大
	};

	static const char* s_FileName[];	// ファイルパス

public:
	CTexture();		// デフォルトコンストラクタ
	~CTexture();	// デストラクタ

public: /* メンバ関数 */
	void LoadAll();										// 全ての読み込み
	void Load(TEXTURE inTexture);						// 指定の読み込み
	void ReleaseAll();									// 全ての破棄
	void Release(TEXTURE inTexture);					// 指定の破棄
	LPDIRECT3DTEXTURE9 GetTexture(TEXTURE inTexture);	// 情報の取得

private: /* メンバ変数 */
	LPDIRECT3DTEXTURE9 s_pTexture[TEXTURE_MAX];	// テクスチャの情報
};

#endif // !_TEXTURE_H_
