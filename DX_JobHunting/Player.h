#ifndef PLAYER_H
#define PLAYER_H

#include "ObjectBase.h"

class Player : public ObjectBase
{
public:
	Player();
	~Player();

public:
	void Update()override;
	void Draw()override;

};

#endif // !PLAYER_H
