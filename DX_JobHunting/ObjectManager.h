#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "ObjectManager.h"

class ObjectManager
{
public:
	static ObjectManager* Instance()
	{
		static ObjectManager instance;
		return &instance;
	}

public:
	~ObjectManager();

	bool Entry();
	void Update();
	void Draw();
private:
	ObjectManager();
	ObjectManager(ObjectManager& obj) = delete;
};


#endif // !OBJECTMANAGER_H
