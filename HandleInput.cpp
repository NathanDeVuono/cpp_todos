#include "HandleInput.h"

void HandleInput::resetInput(AppState& state) {
	state.setInput("");
}

void HandleInput::handleUnknown(std::string input) {
	std::cout << "Sorry, couldn't parse \"" << input << "\". Please try again!";
}

void HandleInput::parseInput(AppState& state) {
	switch (state.getActiveMenu())
	{
	case (AppState::MenuState::MAIN):
	{
		std::string input = state.getInput();

		if (input == "1") {

		}
		else if (input == "2")
		{

		}
		else if (input == "3")
		{

		}
		else if (input == "4")
		{

		}
		else if (input == "5")
		{
			std::cout << "Goodbye!";
			state.setRunning(false);
		}
		else
		{
			handleUnknown(input);
		}
	}
	}
}

void HandleInput::takeInput(AppState& state) {
	switch (state.getActiveMenu())
	{
	case (AppState::MenuState::CREATE): {
		std::cout << "Enter the name of your Todo:\r\n";
		break;
	}
	case (AppState::MenuState::MAIN): {
		std::cout << "1. Create Todo\r\n"
			<< "2. Remove Todo\r\n"
			<< "3. Update Todo\r\n"
			<< "4. Delete Todo\r\n"
			<< "5. Exit\r\n";
		break;
	}
	default:
		break;
	}
	std::string input = "";
	std::cin >> input;

	state.setInput(input);
	parseInput(state);
}
