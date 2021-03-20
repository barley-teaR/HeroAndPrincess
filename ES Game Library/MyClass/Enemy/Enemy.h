#pragma once
#include "../Manager/ManagerBase.h"
#include "../../ESGLib.h"
#include "Vector"

using namespace std;

class Enemy :public ManagerBase
{
public:
	Enemy() {};
	virtual ~Enemy() {};

	virtual void Intialize()   override;
	virtual void Update()      override;
	virtual void Draw2D()      override;
	virtual void Draw3D()      override;
	virtual void DrawAlpha3D() override;

private:
	
};

