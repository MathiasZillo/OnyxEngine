#include "OnyxEngine_external.h"
#include "EntityManager.h"


void InitGame() {
	Test t{ std::string("Besked") };
	Test t2{ std::string("Nummer 2 Besked") };
	OnyxEngine::EntityManager::AddTest(1, t);
	OnyxEngine::EntityManager::AddTest(2, t2);
}