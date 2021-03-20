#pragma once
#include"BaseScreen.h"


class SceneManager {
public:
	//staticはもともとあるもの（インスタンスする前からある）
	//staticは一つしかないもの（定数など）
	//static変数は絶対初期化必要
	static enum SCENE 
	{
		TITLE,
		RESULT,
		MAIN,
		GAME_OVER,
		GAME_CLEAR,
	};

	static void ChangeScene(SCENE scene);
	static void Update();
	static void Draw3D();
	static void Draw2D();
	static void DrawAlpha3D();
	static void DrawEnd();

	static BaseScene *m_pScene;

	static int index;
	
private:
	
};

