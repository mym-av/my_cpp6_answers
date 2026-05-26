#include<iostream>

int CtoF(int);

int main(){
	using namespace std;
	int Celsius;
	cout<<"Please enter a Celsius value: ";
	cin>>Celsius;
	cout<<Celsius<<" degress Celsius is "<<CtoF(Celsius)<<" Fahrenfeit Celsius"<<endl;
	





return 0;
}

int CtoF(int Celsius){

	int var=1.8*Celsius+32;
	return var;

}




