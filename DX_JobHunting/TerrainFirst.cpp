#include "TerrainFirst.h"
#include <list>
#include <iostream>
#include <stdlib.h>

using namespace std;
using namespace TERRAIN;       
TerrainFirst::TerrainFirst(int mapsize)
{
	SetUpCanvas(mapsize);//���H�S�̂��\������񎟌��z��𕝍����T�ȏ�̊�ŗp�ӂ����H�̊O����ǂƂ��Ă���ȊO��ʘH�Ƃ���A�J�n���W�̃��X�g�A�b�v�B���Ƒ��A��O�i�K�̊���
	
	int Dx[4] = { 2,-2,0,0 };
	int Dy[4] = { 0,0,2,-2 };
	while (CandidateWallList.size() != 0)//�S��₪�Ȃ��Ȃ�܂�(���X�g�̃T�C�Y���[���ɂȂ�܂�)�񂶂又����l�i�K
	{
		Pos PickPos = CandidateWallList[rand() % CandidateWallList.size()];//�ǐL�΂��̊J�n���W���������_���őI���l�i�K
		for (auto itr = CandidateWallList.begin(); itr != CandidateWallList.end(); itr++)
		{
			if (*itr == PickPos)
			{
				CandidateWallList.erase(itr);
			}

		}
		TerrainDate[PickPos.X][PickPos.Y] = SpaceType::ExpansionWall;//�w����W��ǂƂ���
		ExpansionPositionDate.push_back(PickPos);//�g�����̕ǃ��X�g�ɓ����
		while (true)//�ǐL�΂��������[�v��ܒi�K
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
