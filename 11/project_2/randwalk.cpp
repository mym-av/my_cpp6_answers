#include"vector.h"
#include<cstdlib>
#include<ctime>
#include<cmath>


int main(){
	using namespace std;
	using VECTOR::Vector;
	const double Rad_to_deg = 45.0/atan(1.0); 
	double direction;   //单次矢量的方向
	double target; 	    //目标
	double dspet;	  //单次矢量的步长
	unsigned long spets = 0;   //行走的次数
	double temp;
	Vector spet;
	Vector result(0.0 , 0.0);
	srand(time(0));
	cout<<"Enter target distance (q to quit): ";
	while(cin>>target){
		cout<<"Enter step length: ";
		if(!(cin>>dspet))
			break;
		while(result.magval() < target){
			direction = rand() % 360;
		spet.reset(dspet*cos(direction/Rad_to_deg),dspet*sin(direction/Rad_to_deg));
			result = result + spet;
			spets++;
		}
		cout<<"After "<<spets<<" spet, the subject "
		      "has the following location:\n";
		cout<<result<<endl;
		cout<<" or\n"<<result<<endl;
		cout<<"Average outward distance per step = "
		    <<result.magval()/spets<<endl;
		spets = 0;
		result.reset(0.0,0.0);
		cout<<"Enter target distance (q to quit): ";	
	
	}
	cin.clear();
	while(cin.get()!='\n')
		continue;
	cout<<"Bye\n";


	return 0;
}
