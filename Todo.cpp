#include "Todo.h"

void Todo::setName(std::string name)
{
	this->name = name;
}

std::string Todo::getName()
{
	return name;
}

void Todo::setCompleted(bool completed)
{
	this->completed = completed;
}

bool Todo::getCompleted()
{
	return completed;
}
