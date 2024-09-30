#include "Ticket.h"

Ticket::Ticket() {
	this->setAttractionName("");
	this->setPrice(0);
}

std::string Ticket::getAttractionName() const {
	return this->attractionName;
}

double Ticket::getTicketPrice() const {
	return this->price;
}

void Ticket::setAttractionName(const std::string attractionName) {
	this->attractionName = attractionName;
}

void Ticket::setPrice(const double price) {
	this->price = price;
}

Ticket::~Ticket()
{
}