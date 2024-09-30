#pragma once
#include "Person.h"

class Visitor : private Person
{
public:
	Visitor();
	~Visitor();

	double getBalance() const;
	
	void setBalance(const double balance);

private:
	double balance;
	//std::vector<Ticket*> tickets;
	//std::vector<Ticket*> visitHistory;
};