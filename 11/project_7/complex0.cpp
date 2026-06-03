#include<iostream>
#include"complex0.h"

using std::cout;
using std::endl;
using std::cin;

Complex::Complex(){
	
	real = 0.0;
	imagy = 0.0;
}

Complex::Complex(double n1,double n2){

	real = n1;
	imagy = n2;
}

Complex Complex::operator~(){
	
	Complex temp;
	temp.real = real;	
	temp.imagy = -imagy;
	return temp;
}

Complex Complex::operator+(const Complex& c)const{

	Complex sum;
	sum.real = real + c.real;
	sum.imagy = imagy + c.imagy;
	return sum;
}

Complex Complex::operator-(const Complex& c)const{

	Complex diff;
	diff.real = real - c.real;
	diff.imagy = imagy - c.imagy;
	return diff;
}


Complex Complex::operator*(const Complex& c)const{

	Complex temp;
	temp.real = (real * c.real) - (imagy * c.imagy);
	temp.imagy = (real * c.imagy) + (imagy * c.real); 
	return temp;
}

Complex Complex::operator*(double n)const{
	
	Complex temp;
	temp.real = real * n;
	temp.imagy = imagy * n;
	return temp;
}

std::ostream& operator<<(std::ostream& os,const Complex& c){

	cout<<"("<<c.real<<","<<c.imagy<<"i)";
	return os;
}

std::istream& operator>>(std::istream& is,Complex& c){
	
	cout<<"real: ";
	is>>(c.real);
	if(!cin)
		return is;
	cout<<"imaginary: ";
	is>>(c.imagy);
	return is;
}
