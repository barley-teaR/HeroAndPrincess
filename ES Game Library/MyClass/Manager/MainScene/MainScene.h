#pragma once
#include "../SceneManager/BaseScreen.h"
#include"../../Player/Player.h"
#include"../../Enemy/Enemy.h"


class MainScene:public BaseScene
{
public:
	MainScene() {};
	virtual ~MainScene() {};

	virtual void Initialize()override;
	virtual void Update()override;
	virtual void Draw3D()override;
	virtual void Draw2D()override;
	virtual void DrawAlpha3D()override { return; }

	virtual void DrawEnd() {};

private:

};

