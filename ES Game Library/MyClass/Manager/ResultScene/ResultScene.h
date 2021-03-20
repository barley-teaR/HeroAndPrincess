#pragma once
#include "../SceneManager/BaseScreen.h"

class ResultScene:public BaseScene
{
public:
	ResultScene();
	~ResultScene();

	virtual void Initialize()override;
	virtual void Update()override;
	virtual void Draw3D()override { return; }
	virtual void Draw2D()override;
	virtual void DrawAlpha3D()override { return; }

	virtual void DrawEnd() {};

private:

};

