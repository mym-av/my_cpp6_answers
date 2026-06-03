#include"vector.h"
#include<cstdlib>
#include<ctime>
#include<fstream>


int main(){
	using namespace std;
	using VECTOR::Vector;
	
	ofstream fout;
	fout.open("result.txt");
	double direction;   //单次矢量的方向
	double target; 	    //目标
	double dspet;	  //单次矢量的步长
	unsigned long spets = 0;   //行走的次数
	double temp;
	Vector spet(0.0,0.0);
	Vector result(0.0 , 0.0 , Vector::RECT);
	srand(time(0));
	cout<<"Enter target distance (q to quit): ";
	while(cin>>target){
		cout<<"Enter step length: ";
		if(!(cin>>dspet))
			break;
		fout<<"Target Distance: "<<target<<", Step Size: "<<dspet<<endl;
		while(result.magval() < target){
			fout.width(0);	
			direction = rand() % 360;
			spet.reset(dspet,direction,Vector::POL);
			result = result + spet;
			fout<<spets<<": (x,y) = "<<"("<<result.xval()<<","<<result.yval()<<")"<<endl;
			spets++;
		}
		fout.width(0);
		fout<<spets<<": (x,y) = "<<"("<<result.xval()<<","<<result.yval()<<")"<<endl;
		fout<<"After "<<spets<<" spet, the subject "
                      "has the following location:\n";
                fout<<result<<endl;
                result.polar_mode();
                fout<<" or\n"<<result<<endl;
                fout<<"Average outward distance per step = "
                    <<result.magval()/spets<<endl;
		

		spets = 0;
		result.reset(0.0,0.0);
		spet.reset(0.0,0.0);
		cout<<"Enter target distance (q to quit): ";	
	
	}
	cin.clear();
	while(cin.get()!='\n')
		continue;
	cout<<"Bye\n";
	fout.close();


	return 0;
}
