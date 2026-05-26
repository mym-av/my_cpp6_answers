#include<iostream>
#include"plorg.h"
#include<cstring>

Plorg::Plorg(const char* name,int ci){
	strncpy(m_name,name,ArSize);
	m_ci = ci;
}


void Plorg::setCI(int ci){
	m_ci = ci;
}

void Plorg::show()const{
	std::cout<<"name: "<<m_name<<std::endl;
	std::cout<<"CI: "<<m_ci<<std::endl;

}
