#pragma once
#include<iostream>
using namespace std;

class personn
{
public:
	personn(void);
	~personn(void);
	void individu(int , string);
	string hello (int,string);

private:

	int _age;
	string _name;
};
