#include "Visitor.h"

Visitor::Visitor() {
	this->setBalance(0);
}

double Visitor::getBalance() const {
	return this->balance;
}

void Visitor::setBalance(const double balance) {
	this->balance = balance;
}

Visitor::~Visitor()
{
}