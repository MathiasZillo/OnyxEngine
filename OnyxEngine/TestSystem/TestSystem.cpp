#include "pch.h"
#include "TestSystem.h"
#include "EntityManager.h"
#include "Test.h"


static void Execute(const Test& t) {
	std::cout << t.message << std::endl;
}

static void AddText(Test& t, std::string txt) {
	t.message += " " + txt;
}


void OnyxEngine::TestSystem::Update()
{
	for(auto & entity : EntityManager::GetTests()) {
		Execute(entity.second);
		AddText(entity.second, "Added text");
	}
	
}

