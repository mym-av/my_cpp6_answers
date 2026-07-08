#include<iostream>
#include"classic.h"
#include<cstring>
Cd::Cd(){
	performers = new char[MAX];
	label = new char[MAX];
	std::strcpy(performers,"Null");
	std::strcpy(label,"Null");
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char* s1,const char* s2,int n,double x){

	performers = new char[MAX];
	label = new char[MAX];
	std::strcpy(performers,s1);
        std::strcpy(label,s2);
        selections = n;
        playtime = x;
}

Cd::Cd(const Cd& d){

	performers = new char[MAX];
	label = new char[MAX];
	std::strcpy(performers,d.performers);
        std::strcpy(label,d.label);
        selections = d.selections;
        playtime = d.playtime;
}

Cd::~Cd(){

	delete[] performers;
	delete[] label;
}

void Cd::Report()const{

	std::cout<<"Performers: "<<performers<<std::endl;
	std::cout<<"Label: "<<label<<std::endl;
	std::cout<<"Selections: "<<selections<<std::endl;
	std::cout<<"Playtime: "<<playtime<<std::endl;
}

Cd& Cd::operator=(const Cd& d){

	if(this == &d)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[MAX];
	label = new char[MAX];
	std::strcpy(performers,d.performers);
        std::strcpy(label,d.label);
        selections = d.selections;
        playtime = d.playtime;
	return *this;
}

Classic::Classic():Cd(){
	
	major = new char[MAX];
	std::strcpy(major,"Null");

}

Classic::Classic(const char* m,const char* s1,const char* s2,int n,double x):Cd(s1,s2,n,x){

	major = new char[MAX];
	std::strcpy(major,m);

}

void Classic::Report()const{

	Cd::Report();
	std::cout<<"Major: "<<major<<std::endl;
	std::cout<<std::endl;
}

Classic::~Classic(){

	delete[] major;
}

Classic& Classic::operator=(const Classic& d){
	
	if(this == &d)
		return *this;
	Cd::operator=(d);
	delete[] major;
	major = new char[MAX];
	std::strcpy(major,d.major);
	return *this;
}

Classic::Classic(const Classic& d):Cd(d){

	major = new char[MAX];
	std::strcpy(major,d.major);
}
