#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include "ObjectBase.h"
class ObjectFactory
{
public:
	static ObjectBase* Create();
};

#endif // !OBJECTFACTORY_H
