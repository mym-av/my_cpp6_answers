#include<iostream>
#include<cstring>
#include"Person.h"

using namespace std;

Person::Person(const string& ln,const char* fn){
	lname = ln;
	strncpy(fname,fn,LIMIT);
	fname[LIMIT-1]='\0';
}

void Person::Show()const{

	std::cout<<fname<<" "<<lname<<endl;

}

void Person::FormalShow()const{

	std::cout<<lname<<" "<<fname<<endl;

}

