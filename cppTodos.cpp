#include <iostream>
#include <string>

#include "Todo.h"
#include "AppState.h"
#include "HandleInput.h"

void drawMenu(std::vector<Todo> todos) {
	std::cout << "Manage Todos\r\n\r\n";
	std::cout << "Todos:\r\n";

	if (todos.empty())
	{
		std::cout << "None yet! Please add some Todos\r\n";
	}
	else
	{
		for (auto&& todo : todos) {
			std::cout << todo.getName()
				<< ":"
				<< (todo.getCompleted() ? "Completed" : "Incomplete")
				<< "\r\n";
		}
	}
}

void drawAdd() {
	std::cout << "Add a Todo\r\n"
		<< "Enter name of Todo:\r\n";
}


void draw(AppState& state) {
	switch (state.getActiveMenu())
	{
	case (AppState::MenuState::MAIN):
	{
		HandleInput::resetInput(state);
		drawMenu(state.getTodos());
		break;
	}
	case (AppState::MenuState::CREATE):
	{
		HandleInput::resetInput(state);
		drawAdd();
		break;
	}
	default: break;
	}
}

int main()
{
	AppState state = AppState{};

	while (state.getRunning())
	{
		draw(state);
		HandleInput::takeInput(state);
	}
	return 0;
}
