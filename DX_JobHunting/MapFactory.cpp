#include "MapFactory.h"

TerrainBase* MapFactory::CreateMap(TERRAIN::TerrainType type, int mapsize)
{
	switch (type)
	{
	case TERRAIN::TerrainType::Normal:
		
		return new TerrainFirst;

		break;

		
	}
	return 0;
}