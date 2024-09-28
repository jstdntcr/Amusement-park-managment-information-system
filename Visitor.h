#pragma once
#include "Person.h"
#include <string>

class Visitor : private Person
{
public:
	Visitor();
	~Visitor();

private:
	std::string name;
	std::string lastName;
	int unsigned age;
	double balance;
	// std::vector<Ticket*> tickets;
	// std::vector<Visit*> visitHistory;
};