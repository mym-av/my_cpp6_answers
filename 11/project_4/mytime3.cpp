#include<iostream>
#include"mytime3.h"


Time::Time(){

	hours = minutes =0;
}

Time::Time(int h,int m){
	
	minutes = m;
	hours = h + minutes/60;
	minutes %= 60;

}

void Time::AddMin(int m){

	minutes += m;
	hours += minutes/60;
	minutes %= 60;

}

void Time::AddHr(int h){

	hours += h;

}

Time operator+(const Time& t1,const Time& t2){

	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;

}

Time operator-(const Time& t1,const Time& t2){
	
	Time diff;
	int tot1;
	int tot2;
	tot1 = t1.hours * 60 + t1.minutes;
	tot2 = t2.hours * 60 + t2.minutes;
	diff.hours = (tot1 - tot2)/60;
	diff.minutes = (tot1 - tot2)%60;
	return diff;
}

Time operator*(const Time& t,double n){
	
	Time result;
	result.minutes = t.minutes*n + t.hours*n*60;
	result.hours = result.minutes/60;
	result.minutes %= 60;
	return result;
}

Time operator*(double n,const Time& t){

	return t*n;

}

std::ostream& operator<<(std::ostream& os,const Time& t){

	os<<t.hours<<" hours, "<<t.minutes<<" minutes";
	return os;
}

void Time::Show()const{

	std::cout<<hours<<" hours, "<<minutes<<" minutes"<<std::endl;

}
