#include<iostream>


int main(){
	using namespace std;
	const double mtod=1.0/60.0;
	const double stod=1.0/3600.0;

	int degrees;
	int minutes;
	int seconds;
	double latitude;
	cout<<"Enter a latitude in degrees, minutes and seconds: \n";
	cout<<"First,enter of degrees: ";
	cin>>degrees;
	cout<<"Next,enter the minutes of arc: ";
	cin>>minutes;
	cout<<"Finally,enter the seconds of arc: ";
	cin>>seconds;
	latitude=degrees+minutes*mtod+seconds*stod;
	cout<<degrees<<" degrees,"<<minutes<<" minutes,"<<seconds<<" seconds "
	    <<"= "<<latitude<<" degrees.\n";
	








return 0;
}
