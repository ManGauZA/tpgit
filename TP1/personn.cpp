#include "personn.h"
#include<iostream>; 
#include <string.h>
using namespace std;


personn::personn(void)
{
}


personn::~personn(void)
{
}

void personn::individu(int age,string name)
{
	age= _age;
	name=_name;
}

string personn::hello(int age, string name)
{
	name=_name;
	age=_age;
	cout<< "Hello I am "<< name<<" and I am "<<age<<"."<<endl; 
}