#include <iostream>
#include <memory>
#include "GameEngineCore/Application.hpp"

class GameEngineAPP : public GameEngine::Application 
{
	//virtual void update() override {}
};

int main() 
{
	auto FinishAppProgramm = std::make_unique<GameEngineAPP>();

	int returnCode = FinishAppProgramm->start(1024, 600, "GameEngine");
	std::cin.get();

	return returnCode;
}