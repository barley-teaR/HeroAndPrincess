#pragma once
#include "../../ESGLib.h"

class ManagerBase
{
public:
	ManagerBase() {};
	virtual ~ManagerBase() {};

	virtual void Intialize() = 0;
	virtual void Update() = 0;
	virtual void Draw2D() = 0;
	virtual void Draw3D() = 0;
	virtual void DrawAlpha3D() = 0;
private:

};

