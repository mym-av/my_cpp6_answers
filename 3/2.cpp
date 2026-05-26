#include<iostream>


int main(){
	using namespace std;
	const int ftoinch =14;//英尺=14英寸
	const double ptokg=1/2.2;//1千克=2.2磅
	const double InchToRice=0.0254;//1英寸=0.0254米 
	int food;
	int inch;
	int pound;
	int height;
	double rice;
	double weight;
	double BMI;
	cout<<"Enter your food: ";
	cin>>food;
	cout<<"Enter your inch: ";
	cin>>inch;
	height=food*ftoinch+inch;
	cout<<"Your height is "<<height<<endl;
	rice=height*InchToRice;
	cout<<"Your rice is "<<rice<<endl;
	cout<<"Enter your pound: ";
	cin>>pound;
	weight=pound*ptokg;
	cout<<"your weight is "<<weight<<endl;
	BMI=weight/(rice*rice);
	cout<<"your BMI is "<<BMI<<endl;




return 0;
}
