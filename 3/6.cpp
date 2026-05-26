#include<iostream>

int main(){
	using namespace std;
	double kilometer;
	double rise;
	double fuel_c;	
	cout<<"Enter kilometer: ";
	cin>>kilometer;
	cout<<"Enter rise: ";
	cin>>rise;
	fuel_c=rise/kilometer;
	cout<<"The fuel consumption per 100 kilometers is "<<fuel_c*100<<endl;




return 0;
}
