#ifndef SCENEBASE_H
#define SCENEBASE_H

#include <string>
#include "DxLib.h"

class SceneBase
{
public:
	SceneBase(std::string FileName)
	{
		ModelHundle = MV1LoadModel(FileName.c_str());
	};
	virtual ~SceneBase()
	{
		MV1DeleteModel(ModelHundle);
	};
	virtual void Load() = 0;
	virtual void Update() = 0;

public:
	int ModelHundle;
};

#endif // !SCENEBASE_H

