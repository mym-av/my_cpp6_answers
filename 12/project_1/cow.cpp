#include<iostream>
#include<cstring>
#include"cow.h"

using std::cout;
using std::endl;


Cow::Cow(){

	strcpy(name,"");
	hobby = NULL;
	weight = 0.0;
}

Cow::Cow(const char* nm,const char* ho,double wt){

	strcpy(name,nm);
	hobby = new char[strlen(ho)+1];
	strcpy(hobby,ho);
	weight = wt;
}

Cow::Cow(const Cow& c){

	strcpy(name,c.name);
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby,c.hobby);
	weight = c.weight;
}

Cow::~Cow(){

	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c){
	
	delete[] hobby;
	strcpy(name,c.name);
        hobby = new char[strlen(c.hobby)+1];
        strcpy(hobby,c.hobby);
        weight = c.weight;
}

void Cow::ShowCow()const{

	cout<<"--------ShowCow()--------\n";
	cout<<"name: "<<name<<endl;
	cout<<"hobby: "<<hobby<<endl;
	cout<<"weight: "<<weight<<endl;
}

