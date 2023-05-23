#ifndef MAPFACTORY_H
#define MAPFACTORY_H

#include <vector>
#include "TerrainFirst.h"
class MapFactory
{
public:
	MapFactory(){}
	~MapFactory(){}
	
public:
	static TerrainBase* CreateMap(TERRAIN::TerrainType type = TERRAIN::TerrainType::Normal,int mapsize = 45);
};

#endif // !TERRAIN_H
