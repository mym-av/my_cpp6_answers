#include<iostream>

int main(){

	using namespace std;
	long long seconds;
	int days;
	int hours;
	int minutes;
	int secs;
	const int dtos=24*60*60;
	const int htos=60*60;
	const int mtos=60;
	cout<<"Enter the number of seconds: ";
	cin>>seconds;
	hours=seconds%dtos/htos;
	minutes=seconds%(dtos)%(htos)/mtos;
	secs=seconds%(dtos)%(htos)%(mtos);
	cout<<seconds<<" seconds = "<<seconds/dtos<<" days,"<<hours<<" hours, "<<minutes<<" minutes, "<<secs<<" seconds.\n"; 





return 0;
}
