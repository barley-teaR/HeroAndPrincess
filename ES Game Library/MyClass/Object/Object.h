#pragma once
#include "../../ESGLib.h"

struct Transform
{
	Vector3 position = Vector3_Zero;
	float scale = 1.f;
	Vector3 rotation = Vector3_Zero;
};

//typedef std::shared_ptr<Object> Ob;
class Object
{
public:
	Object() { transform.reset(new Transform); }
	virtual ~Object() { };

protected:
	virtual void Intialize() = 0;
	virtual void Update()    = 0;
	virtual void Draw2D() { return; }
	virtual void Draw3D() { return; }

private:
	std::shared_ptr<Transform> transform;

};

class ObjectManager
{
public:
	ObjectManager() {};
	~ObjectManager() {};

private:

};

