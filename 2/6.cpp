#include<iostream>

int LtoA(double);

int main(){
	using namespace std;
	double light_years;
	cout<<"Enter a nummber of light years: ";
	cin>>light_years;
	cout<<light_years<<" light years = "<<LtoA(light_years)<<" astronomical unit"<<endl;
	





return 0;
}

int LtoA(double light_years){
	int var=light_years*63240;
	return var;

}







