#include "TerrainBase.h"
using namespace std;
using namespace TERRAIN;

void TerrainBase::SetUpCanvas(int mapsize)
{
	//外枠の生成
	vector<vector<SpaceType>> MazeTerrainDate(mapsize, vector<SpaceType>(mapsize, SpaceType::Wall));

	//壁候補の配置とカウント、通路の設置
	for (int i = 1; i < MazeTerrainDate.size() - 1; i++)
	{
		for (int j = 1; j < MazeTerrainDate.size() - 1; j++)
		{
			if (i % 2 != 0 && j % 2 != 0)
			{
				MazeTerrainDate[i][j] = SpaceType::CandidateWall;
				CandidateWallList.push_back({ i,j,SpaceType::CandidateWall});
			}
			else
			{
				MazeTerrainDate[i][j] = SpaceType::Passage;
			}
		}
	}

	TerrainDate = MazeTerrainDate;

}

void TerrainBase::Draw2D()
{
	for (int i = 0; i < TerrainDate.size(); i++)
	{
		for (int j = 0; j < TerrainDate.size(); j++)
		{
			switch (TerrainDate[i][j])
			{
			case TERRAIN::SpaceType::Wall:
				DrawBox(i * 5, j * 5, (i + 1) * 5, (j + 1) * 5, GetColor(255, 255, 255), true);
				break;

			case TERRAIN::SpaceType::CandidateWall:
				DrawBox(i * 5, j * 5, (i + 1) * 5, (j + 1) * 5, GetColor(0, 255, 0), true);
				break;
			}
		}
	}
}



bool TerrainBase::WallExtendable(TERRAIN::Pos current)
{
	return true;
}

int TerrainBase::PickDirection()
{
	return 0;
}

void TerrainBase::DeleteCandidate(TERRAIN::Pos currant)
{
	for (auto itr = CandidateWallList.begin();itr != CandidateWallList.end();itr++)
	{
		if (*itr == currant)
		{

		}
	}
}
