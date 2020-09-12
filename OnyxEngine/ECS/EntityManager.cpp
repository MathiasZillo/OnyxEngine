#include "pch.h"
#include "EntityManager.h"
#include <map>


static std::map<Entity, Test> _tests;

void OnyxEngine::EntityManager::AddTest(Entity entity, Test & component)
{
	_tests[entity] = component;
}

std::map<Entity, Test>& OnyxEngine::EntityManager::GetTests()
{
	return _tests;
}

