#include<iostream>
#include"classic.h"
#include<cstring>
Cd::Cd(){
	std::strcpy(performers,"Null");
	std::strcpy(label,"Null");
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char* s1,const char* s2,int n,double x){

	std::strcpy(performers,s1);
        std::strcpy(label,s2);
        selections = n;
        playtime = x;
}

Cd::Cd(const Cd& d){

	std::strcpy(performers,d.performers);
        std::strcpy(label,d.label);
        selections = d.selections;
        playtime = d.playtime;
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
	std::strcpy(performers,d.performers);
        std::strcpy(label,d.label);
        selections = d.selections;
        playtime = d.playtime;
	return *this;
}

Classic::Classic():Cd(){
	
	std::strcpy(major,"Null");

}

Classic::Classic(const char* m,const char* s1,const char* s2,int n,double x):Cd(s1,s2,n,x){

	std::strcpy(major,m);

}

void Classic::Report()const{

	Cd::Report();
	std::cout<<"Major: "<<major<<std::endl;
	std::cout<<std::endl;
}
