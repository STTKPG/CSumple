#ifndef COMMON_H
#define COMMON_H

namespace TERRAIN {
	enum class SpaceType
	{
		Wall,
		CandidateWall,
		ExpansionWall,
		FixedWall,
		Passage
	};

	enum class TerrainType
	{
		Normal,
		Random,
		Max
	};

	struct Pos
	{
		int X;
		int Y;
		SpaceType State;

		bool operator == (const Pos& rhs) const
		{
			if (X == rhs.X&&Y == rhs.Y)
			{
				return true;
			}

			return false;
		}

		bool operator != (const Pos& rhs) const
		{
			if (X != rhs.X&&Y != rhs.Y)
			{
				return true;
			}

			return false;
		}

		int operator += (const Pos& rhs) const
		{
			return X + rhs.X;
			return Y + rhs.Y;
		}
	};

	static Pos PSet(int posx,int posy)
	{
		Pos Result;
		Result.X = posx;
		Result.Y = posy;

		return Result;
	}
}

#endif // !COMMON_H
