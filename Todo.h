#pragma once

#include <string>

class Todo {
	private:
	std::string name;
	bool completed = false;

	public:
	void setName(std::string name);
	std::string getName();
	void setCompleted(bool completed);
	bool getCompleted();
};
