#pragma once
#include "string"

class Person
{
public:
	Person();
	~Person();

private:
	std::string login;
	std::string password;
	int id;
};