#pragma once
#include "Fur.h"
#include "Configuration.h"

class RD_Interface
{
public:
	RD_Interface()
	{
	}

	~RD_Interface()
	{
	}

	void startRenderEngine();
	void pauseRenderEngine();
	void stopRenderEngine();

	void render();
	void submitDrawCall(DrawCall& drawCall);

	//TODO: Refactoring Point
	void updateRenderEngineOptions(std::string parameterName, int parameter);
	void updateRenderEngineOptions(std::string parameterName, float parameter);
	void updateRenderEngineOptions(std::string parameterName, std::string parameter);
private:
	Fur fur;
};
