#pragma once
#include "../Manager/ManagerBase.h"
#include "../../ESGLib.h"


class Player:public ManagerBase
{
public:
	Player() {};
	virtual ~Player() {};

	virtual void Intialize()   override;
	virtual void Update()      override;
	virtual void Draw2D()      override;
	virtual void Draw3D()      override;
	virtual void DrawAlpha3D() override;

private:
	


};

