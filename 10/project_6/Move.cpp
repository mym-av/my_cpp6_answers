#include<iostream>
#include"Move.h"


Move::Move(double x,double y){
	m_x = x;
	m_y = y;
}


Move Move::add(const Move& m)const{
	double x;
	double y;
	Move temp;
	x = this->m_x + m.m_x;
	y = this->m_y+ m.m_y;
	temp.reset(x,y);
	return temp;
}

void Move::reset(double x,double y){

	m_x = x;
	m_y = y;

}


void Move::showmove()const{
	std::cout<<"-------------\n";
	std::cout<<"x: "<<m_x<<std::endl;
	std::cout<<"y: "<<m_y<<std::endl;
}
