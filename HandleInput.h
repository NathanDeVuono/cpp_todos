#pragma once

#include <string>
#include <iostream>
#include "AppState.h"

class HandleInput
{
	public:
	static void resetInput(AppState& state);

	static void handleUnknown(std::string input);

	static void parseInput(AppState& state);

	static void takeInput(AppState& state);
};
