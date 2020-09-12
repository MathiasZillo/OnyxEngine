#pragma once
#include "pch.h"
#include "Engine.h"
#include "TestSystem.h"
#include <chrono>
#include <thread>
void InitGame();

int main() {

	if (OnyxEngine::InitEngine()) {
		std::cout << "Onyx Engine Running" << std::endl;
	}

	InitGame();

	while (true) {
		OnyxEngine::TestSystem::Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));
	}


	OnyxEngine::ShutdownEngine();

	int i = 0;
	std::cin >> i;

	return 0;
}