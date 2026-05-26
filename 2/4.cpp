#include<iostream>

using namespace std;
int Agetomouth(double);

int main(){

	double age;
	cout<<"input you age:";
	cin>>age;
	cout<<"Your "<<age<<" is equivalent to "<<Agetomouth(age)<<" months"<<endl;



return 0;
}


int Agetomouth(double age){

	return 12*age;


}


