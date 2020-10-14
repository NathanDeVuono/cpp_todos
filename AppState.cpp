#include "AppState.h"

AppState::MenuState AppState::getActiveMenu()
{
	return AppState::activeMenu;
}

void AppState::setActiveMenu(MenuState active)
{
	AppState::activeMenu = active;
}

std::vector<Todo> AppState::getTodos()
{
	return AppState::todos;
}

void AppState::setInput(std::string input)
{
	AppState::input = input;
}

std::string AppState::getInput()
{
	return AppState::input;
}

void AppState::setRunning(bool running)
{
	AppState::running = running;
}

bool AppState::getRunning()
{
	return running;
}
