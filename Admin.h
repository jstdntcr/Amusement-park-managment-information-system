#pragma once
#include "Person.h"

class Admin : private Person
{
public:
	Admin();
	~Admin();

	int unsigned getStateNumber() const;

	void setStateNumber(const int unsigned stateNumber);

private:
	int unsigned stateNumber;
};