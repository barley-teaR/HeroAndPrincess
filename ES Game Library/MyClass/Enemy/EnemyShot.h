#pragma once
#include "../Manager/ManagerBase.h"
#include "../../ESGLib.h"
#include "Vector"

using namespace std;

class EnemyShot :public ManagerBase
{
public:
	EnemyShot() {};
	virtual ~EnemyShot() {};

	virtual void Intialize()   override;
	virtual void Update()      override;
	virtual void Draw2D()      override;
	virtual void Draw3D()      override;
	virtual void DrawAlpha3D() override;

private:
	
};