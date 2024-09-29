#pragma once
#include "string"
#include <vector>

class Person
{
public:
	Person(std::string login, std::string password,
		std::string name, std::string lastName, int unsigned age);
	~Person();

	static int unsigned counter;

	std::string getLogin();
	std::string getPassword();
	int unsigned getId();
	std::string getName();
	std::string getLastName();
	int unsigned getAge();

	void setLogin(std::string login);
	void setPassword(std::string password);
	void setId(int unsigned id);
	void setName(std::string name);
	void setLastName(std::string lastName);
	void setAge(int unsigned age);

private:
	std::string login;
	std::string password;
	int unsigned id;

	std::string name;
	std::string lastName;
	int unsigned age;
};