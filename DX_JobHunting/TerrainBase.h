#ifndef TERRAINBASE_H
#define TERRAINBASE_H

#include <vector>
#include <iostream>
#include "Common.h"
#include "DxLib.h"

class TerrainBase
{
public:
	TerrainBase(){}
	virtual ~TerrainBase(){}

protected:
	//virtual void CreateMap(int mapsize) = 0;
	virtual void Draw2D();
	bool WallExtendable(TERRAIN::Pos current);
	int PickDirection();
	void DeleteCandidate(TERRAIN::Pos currant);
	void SetUpCanvas(int mapsize);
public:
	std::vector<std::vector<TERRAIN::SpaceType>> TerrainDate;
protected:
	std::vector<TERRAIN::Pos> ExpansionPositionDate;
	std::vector<TERRAIN::Pos> CandidateWallList;

};

#endif // !TERRAINBASE_H
