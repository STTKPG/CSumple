#include "TerrainFirst.h"
#include <list>
#include <iostream>
#include <stdlib.h>

using namespace std;
using namespace TERRAIN;       
TerrainFirst::TerrainFirst(int mapsize)
{
	SetUpCanvas(mapsize);//迷路全体を構成する二次元配列を幅高さ５以上の奇数で用意し迷路の外周を壁としてそれ以外を通路とする、開始座標のリストアップ。第一と第二、第三段階の完了
	
	int Dx[4] = { 2,-2,0,0 };
	int Dy[4] = { 0,0,2,-2 };
	while (CandidateWallList.size() != 0)//全候補がなくなるまで(リストのサイズがゼロになるまで)んじょ処理第四段階
	{
		Pos PickPos = CandidateWallList[rand() % CandidateWallList.size()];//壁伸ばしの開始座標ををランダムで選択第四段階
		for (auto itr = CandidateWallList.begin(); itr != CandidateWallList.end(); itr++)
		{
			if (*itr == PickPos)
			{
				CandidateWallList.erase(itr);
			}

		}
		TerrainDate[PickPos.X][PickPos.Y] = SpaceType::ExpansionWall;//指定座標を壁とする
		ExpansionPositionDate.push_back(PickPos);//拡張中の壁リストに入れる
		while (true)//壁伸ばし処理ループ第五段階
		{
			switch (rand() % 4)
			{
			case 0:
				if (TerrainDate[PickPos.X + 2][PickPos.Y] == SpaceType::ExpansionWall)
				{
					continue;
				}
				PickPos.X++;
				TerrainDate[PickPos.X][PickPos.Y] = SpaceType::ExpansionWall;
				break;
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			default:
				break;
			}
		}

	}

}
//void TerrainFirst::CreateMap(int mapsize)
//{
//	
//}
//
