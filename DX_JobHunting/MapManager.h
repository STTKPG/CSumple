#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include<vector>
#include "MapFactory.h"

class MapManager
{
public:
	static MapManager* Instance()
	{
		static MapManager instance;
		return &instance;
	}
public:
	~MapManager(){}

public:
	void CreateDansion(TerrainBase* map);
	//void SetActiveMap();

public:
	std::vector<TerrainBase*> DansionDate;


private:
	MapManager()
	{

	}

	MapManager(MapManager& obj) = delete;
};

#endif // !TERRAINMANAGER_H
