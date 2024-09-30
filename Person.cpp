#include "Person.h"

int unsigned Person::counter = 0;

Person::Person(const std::string login, const std::string password,
	const std::string name, const std::string lastName, const int unsigned age) {

	this->setId(this->counter++);
	this->setLogin(login);
	this->setPassword(password);
	this->setName(name);
	this->setLastName(lastName);
	this->setAge(age);
}

Person::Person() {
	this->setAge(0);
	this->setId(this->counter++);
}

std::string Person::getLogin() const {
	return this->login;
}

std::string Person::getPassword() const {
	return this->password;
}

int unsigned Person::getId() const {
	return this->id;
}

std::string Person::getName() const {
	return this->name;
}

std::string Person::getLastName() const {
	return this->lastName;
}

int unsigned Person::getAge() const {
	return this->age;
}

void Person::setLogin(const std::string login) {
	this->login = login;
}

void Person::setPassword(const std::string password) {
	this->password = password;
}

void Person::setId(const int unsigned id) {
	this->id = id;
}

void Person::setName(const std::string name) {
	this->name = name;
}
void Person::setLastName(const std::string lastName) {
	this->lastName = lastName;
}
void Person::setAge(const int unsigned age) {
	this->age = age;
}

Person::~Person() {

}