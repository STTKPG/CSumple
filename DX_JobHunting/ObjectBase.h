#ifndef OBJECTBASE_H
#define OBJECTBASE_H

#include "DxLib.h"

class ObjectBase
{
public:
	enum class ObjectType
	{
		Block,
		Player,
		Enemy
	};

public:
	ObjectBase() {};
	virtual ~ObjectBase() {};

public:
	virtual void Update() = 0;
	virtual void Draw() = 0;

public:
	VECTOR Pos;

};

#endif // !OBJECTBASE_H