#include"abstract.h"
#include<cstring>
baseABC::baseABC(const char* l,int r){

	label = new char[std::strlen(l)+1];
	std::strcpy(label,l);
	rating = r;
}

baseABC::baseABC(const baseABC& rs){

	label = new char[std::strlen(rs.label)+1];
	std::strcpy(label,rs.label);
	rating = rs.rating;
}

baseABC& baseABC::operator=(const baseABC& rs){

	if(this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label)+1];
	std::strcpy(label,rs.label);
	rating = rs.rating;
}

std::ostream& operator<<(std::ostream& os,const baseABC& rs){

	os<<"Label: "<<rs.label<<std::endl;
	os<<"Rating: "<<rs.rating<<std::endl;
	return os;
}

void baseABC::View()const{

	std::cout<<"Label: "<<label<<std::endl;
	std::cout<<"Rating: "<<rating<<std::endl;
}

baseABC::~baseABC(){

	delete[] label;
}

baseDMA::baseDMA(const char* l, int r):baseABC(l,r){}

std::ostream& operator<<(std::ostream& os,const baseDMA& rs){

	os<<(const baseABC&)rs;
	return os;
}

void baseDMA::View()const{

	baseABC::View();

}

lacksDMA::lacksDMA(const char* c,const char* l,int r):baseABC(l,r){

	std::strncpy(color,c,COL_LEN-1);
	color[COL_LEN-1] = '\0';
}

std::ostream& operator<<(std::ostream& os,const lacksDMA& rs){

	os<<(const baseABC&)rs;
	return os;
}

void lacksDMA::View()const{

	baseABC::View();
	std::cout<<"Color: "<<color<<std::endl;
}

hasDMA::hasDMA(const char* s,const char* l,int r):baseABC(l,r){

	style = new char[std::strlen(s)+1];
	std::strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA& hs):baseABC(hs){

	style = new char[std::strlen(hs.style)+1];
	std::strcpy(style,hs.style);
}

hasDMA& hasDMA::operator=(const hasDMA& hs){

	if(this == &hs)
		return *this;
	baseABC::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style)+1];
        std::strcpy(style,hs.style);
	return *this;
}

void hasDMA::View()const{

	baseABC::View();
	std::cout<<"Style: "<<style<<std::endl;
}

std::ostream& operator<<(std::ostream& os,const hasDMA& rs){

        os<<(const baseABC&)rs;
        return os;
}

hasDMA::~hasDMA(){

	delete[] style;
}



