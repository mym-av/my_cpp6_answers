#include<iostream>


int main(){
	using namespace std;
	long long worldp;
	long long USp;
	double proportion;
	cout<<"Enter the world's population: ";
	cin>>worldp;
	cout<<"Enter the population of US: ";
	cin>>USp;
	proportion=(double)USp/(double)worldp;
	cout<<"The population of the US is "<<proportion*100<<"%"<<" of the world population.\n";







return 0;
}
