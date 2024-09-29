#pragma once
#include "string"

class Ticket
{
public:
	Ticket();
	~Ticket();

	std::string getAttractionName();
	double getTicketPrice();

private:
	std::string attractionName;
	double price;
};