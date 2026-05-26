#include<iostream>
using namespace std;

double my_avg(double x,double y);

int main(){
	double x;
	double y;
	double temp;
	cout<<"Enter x and y: ";
	while(cin>>x>>y){
		if(0==x||0==x){
			cout<<"quit\n";
			break;
		}
	temp=my_avg(x,y);
	cout<<"harmonic mean: "<<temp<<endl;
	cout<<"Enter x and y: ";
	}





return 0;
}

double my_avg(double x,double y){


	return 2.0*x*y/(x+y);
}





