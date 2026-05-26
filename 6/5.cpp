#include<iostream>




int main(){
	using namespace std;
	double val;
	double temp;
	cout<<"Enter tvarps: ";
	while(cin>>val && val>=0){

		if(val<=5000)
			cout<<"No tvarps: "<<endl;
		else if(val>5000&&val<=15000){
			temp=(val-5000)*0.1;
			cout<<temp<<" tvarps\n";
		}
		else if(val>15000&&val<=35000){
			temp=(val-15000)*0.15+10000*0.1;
			cout<<temp<<" tvarps\n";
		}
		else if(val>35000){
			temp=(val-35000)*0.2+20000*0.15+10000*0.1;
			cout<<temp<<" tvarps\n";
		}

		cout<<"Next enter tvarps: ";


	}


	return 0;
}
