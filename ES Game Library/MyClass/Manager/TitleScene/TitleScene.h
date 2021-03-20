#pragma once
#include "../SceneManager/BaseScreen.h"

class TitleScene :public BaseScene
{
public:
	TitleScene() {};
	virtual ~TitleScene() {};

	virtual void Initialize()override;
	virtual void Update()override;
	virtual void Draw3D()override { return; }
	virtual void Draw2D()override;
	virtual void DrawAlpha3D()override { return; }

	virtual void DrawEnd() {};
private:

};

