#include<iostream>
using namespace std;

const int ArSize = 3;

typedef double(*p_fun)(double,double);

double calculate(double x,double y, p_fun pf);
double add(double x,double y);
double reduce(double x,double y);
double ride(double x,double y);

int main(){
	p_fun pf[ArSize]={add,reduce,ride};
	double x;
	double y;
	double temp;
	cout<<"Enter x and y(q to quit): ";
	while(cin>>x>>y){
		for(int i=0;i<ArSize;i++){
			temp=calculate(x,y,pf[i]);
			cout<<"Value #"<<i+1<<": "<<temp<<endl;
		}
		cout<<"Next enter x and y(q to quit): ";
	}
	cout<<"Done\n";
	return 0;
}


double calculate(double x,double y,p_fun pf){
	double temp;

	temp=pf(x,y);

	return temp;	
}

double add(double x,double y){


	return x+y;
}

double reduce(double x,double y){


	return x-y;

}


double ride(double x,double y){

	return x*y;
}






