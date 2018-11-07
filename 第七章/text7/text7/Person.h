#pragma once

#include<string>
using namespace std;

class Person
{
	friend istream &read(istream &, Person &);
	friend ostream &print(ostream &, Person &);
public:
	Person() = default;
	Person(const string & sname, const string & saddr) :name(sname), addr(saddr) {}
	Person(std::istream& );
	~Person();

	string get_name() const { return name; }
	string get_addr() const { return addr; }
private:
	string name;
	string addr;
	
};

