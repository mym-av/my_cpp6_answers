#include<iostream>
#include"stonewt.h"

using std::cout;
using std::cin;
using std::endl;
const int ArSize = 6;
int main(){

	Stonewt st[ArSize] ={100,150,200};
	Stonewt val(11,0);
	double temp;
	Stonewt max = st[0];
	Stonewt min = st[0];
	int count = 0;
	cout<<"The content within the element group\n";
	for(int i=0;i<ArSize;i++){
		st[i].show_lbs();
	}
	for(int i=3;i<ArSize;i++){
		cout<<"Enter "<<i+1<<"# value: ";
		cin>>temp;
		st[i] = temp;
	}
	
	for(int i=0;i<ArSize;i++){

		if(st[i] > max)
			max = st[i];
		if(st[i] < min)
			min = st[i];
		if(st[i]>= val)	
			count++;	

	}
	
	cout<<"Max Stonwt: ";
	max.show_lbs();
	cout<<"Min Stonwt：";
	min.show_lbs();
	cout<<"Count(The number of items weighing more than 11 stone = 154 pounds): "<<count<<endl;



	return 0;
}
