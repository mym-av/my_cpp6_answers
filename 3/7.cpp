#include<iostream>


int main(){

	using namespace std;
	double kilometers;
	double rises;
	double ktom=0.6214;
	double rtog=1/3.875;
	double fule_c;
	double mpg;


	cout<<"Enter kilometers: ";
	cin>>kilometers;
	cout<<"Enter rises: ";
	cin>>rises;
	fule_c=rises/kilometers*100;
	mpg=(kilometers*ktom)/(rises*rtog);
	cout<<fule_c<<" fule_c = "<<mpg<<" mpg"<<endl;

	




return 0;
}
