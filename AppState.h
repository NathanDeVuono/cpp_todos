#pragma once

#include <vector>
#include <string>
#include "Todo.h"

class AppState
{
	public:
	enum class MenuState
	{
		MAIN,
		CREATE,
		READ,
		UPDATE,
		DESTROY,
	};

	private:
	std::vector<Todo> todos = {};
	std::string input = "";

	MenuState activeMenu = MenuState::MAIN;

	bool running = true;

	public:
	MenuState getActiveMenu();
	void setActiveMenu(MenuState active);

	std::vector<Todo> getTodos();

	void setInput(std::string input);
	std::string getInput();

	void setRunning(bool running);
	bool getRunning();
};
