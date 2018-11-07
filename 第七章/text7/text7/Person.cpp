#include "stdafx.h"
#include "Person.h"


Person::Person(std::istream & is)
{
	read(is, *this);
}

Person::~Person()
{
}

istream &read(istream &is, Person &person)
{
	is >> person.name >> person.addr;
	return is;
}

ostream &print(ostream &os, Person &person)
{
	os << person.name << person.addr;
	return os;

}