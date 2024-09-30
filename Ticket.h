#pragma once
#include "string"

class Ticket
{
public:
	Ticket();
	~Ticket();

	std::string getAttractionName() const;
	double getTicketPrice() const;

	void setAttractionName(const std::string attractionName);
	void setPrice(const double price);

private:
	std::string attractionName;
	double price;
};