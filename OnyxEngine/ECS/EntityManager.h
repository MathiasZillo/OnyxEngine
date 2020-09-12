#pragma once
#include "pch.h"
#include "Entity.h"
#include "Test.h"
#include <map>

namespace OnyxEngine {
	namespace EntityManager {

		constexpr U16 MAX_ENTITIES = 65536;

		void AddTest(Entity entity, Test & component);

		std::map<Entity, Test>& GetTests();
	}

}