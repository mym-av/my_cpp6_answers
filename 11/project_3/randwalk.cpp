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
	double max = 0;
	double min = 99999;
	double total = 0;
	int n = 0;
	int count = 0;
	Vector spet;
	Vector result(0.0 , 0.0 , Vector::RECT);
	srand(time(0));
	cout<<"Please enter the number of tests (q to quit): ";
	(cin>>n).get();
	for(int i=0;i<n;i++){
		cout<<"-------("<<i+1<<")--------\n";
		cout<<"Enter target distance (q to quit): ";
		while(cin>>target){
			cout<<"Enter step length: ";
			if(!(cin>>dspet))
				break;
			count++;
			while(result.magval() < target){
				direction = rand() % 360;
				spet.reset(dspet,direction,Vector::POL);
				result = result + spet;
				spets++;
			}
			if(i==0)
				min = spets;
			if(spets>max)
				max = spets;
			if(spets<min)
				min = spets;
			total+=spets;
			cout<<"After "<<spets<<" spet, the subject "
				"has the following location:\n";
			cout<<result<<endl;
			result.polar_mode();
			cout<<" or\n"<<result<<endl;
			cout<<"Average outward distance per step = "
				<<result.magval()/spets<<endl;


			result.rect_mode();
			fout<<"After "<<spets<<" spet, the subject "
				"has the following location:\n";
			fout<<result<<endl;
			result.polar_mode();
			fout<<" or\n"<<result<<endl;
			fout<<"Average outward distance per step = "
				<<result.magval()/spets<<endl;
			spets = 0;
			result.reset(0.0,0.0);
			break;
		}
		while(!cin){
			cin.clear();
			while(cin.get()!='q')
				continue;
			break;
		}

	}
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
	if(n>1)
	cout<<"average: "<<total/count<<endl;
	else
	cout<<"average: "<<n<<endl;
	cout<<"Bye\n";
	fout.close();


	return 0;
}
