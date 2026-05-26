#include<iostream>

using namespace std;
void myTime(int,int);

int main(){
	int hours;
	int minutes;
	cout<<"Enter the nummber of hours: ";
	cin>>hours;
	cout<<"Enter the nummber of minutes";
	cin>>minutes;
	myTime(hours,minutes);


return 0;
}

void myTime(int hours,int minutes){

	cout<<"Time: "<<hours<<":"<<minutes<<endl;


}






