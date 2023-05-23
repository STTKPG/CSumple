#ifndef WALLBOX_H
#define WALLBOX_H

#include "ObjectBase.h"

class WallBox : public ObjectBase
{
public:
	WallBox();
	~WallBox();

public:
	void Update()override;
	void Draw()override;

public:
	bool Is_Active;
};

#endif // !"WALLBOX_H"
