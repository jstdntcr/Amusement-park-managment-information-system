#include "Admin.h"

Admin::Admin() {
	this->setStateNumber(0);
}

int unsigned Admin::getStateNumber() const {
	return this->stateNumber;
}

void Admin::setStateNumber(const int unsigned stateNumber) {
	this->stateNumber = stateNumber;
}

Admin::~Admin()
{
}