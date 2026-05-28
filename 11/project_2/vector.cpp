#include<cmath>
#include"vector.h"

using std::cout;
using std::endl;
using std::sin;
using std::cos;
using std::sqrt;
using std::atan;
using std::atan2;

namespace VECTOR{

	const double Rad_to_deg = 45.0/atan(1.0);

	double Vector::magval()const{
		double mag;
		mag = sqrt(x*x + y*y);
		return mag;
	}

	double Vector::angval()const{
		double ang;
		if(x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y,x);
	}

	Vector::Vector(){

		x = y = 0.0; 
	}

	Vector::Vector(double n1,double n2){
		x = n1;
		y = n2;

	}

	Vector Vector::reset(double n1,double n2){

		x = n1;
		y = n2;

	}

	Vector::~Vector(){

	}

	Vector Vector::operator+(const Vector& b)const{
		return Vector(x + b.x , y + b.y);
	}


	Vector Vector::operator-(const Vector& b)const{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const{

		return Vector(-x,-y);
	}


	Vector Vector::operator*(double n)const{
		return Vector(x*n,y*n);
	}

	Vector operator*(double n,const Vector& v){
		return v * n;
	}

	std::ostream& operator<<(std::ostream& os,const Vector& v){


		os<<"(x,y) = ("<<v.x<<", "<<v.y<<")";



		return os;
	}

	Vector::operator double()const{

		return sqrt(x*x+y*y); 
	}

};	
