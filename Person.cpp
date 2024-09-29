#include "Person.h"

int unsigned Person::counter = 0;

Person::Person(std::string login, std::string password,
	std::string name, std::string lastName, int unsigned age) {

	this->id = this->counter++;
	this->login = login;
	this->password = password;
	this->name = name;
	this->lastName = lastName;
	this->age = age;
}

Person::~Person() {

}