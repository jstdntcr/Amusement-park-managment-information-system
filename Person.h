#pragma once
#include "string"
#include <vector>

class Person
{
public:
	Person(const std::string login, const std::string password,
		const std::string name, const std::string lastName, const int unsigned age);
	Person();
	~Person();

	static int unsigned counter;

	std::string getLogin() const;
	std::string getPassword() const;
	int unsigned getId() const;
	std::string getName() const;
	std::string getLastName() const;
	int unsigned getAge() const;

	void setLogin(const std::string login);
	void setPassword(const std::string password);
	void setId(const int unsigned id);
	void setName(const std::string name);
	void setLastName(const std::string lastName);
	void setAge(const int unsigned age);

private:
	std::string login;
	std::string password;
	int unsigned id;

	std::string name;
	std::string lastName;
	int unsigned age;
};