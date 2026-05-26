#include<iostream>
using namespace std;

const int ArSize = 10;

int Fill_array(double ar[],int size);

void Show_array(double ar[],int size);

void Reverse_array(double ar[],int size);

int main(){
	int count;
	double val[ArSize];
	count=Fill_array(val,ArSize);
	Show_array(val,count);
	Reverse_array(val,count);
	Show_array(val,count);
	return 0;
}

int Fill_array(double ar[],int size){
	int i=0;
	cout<<"Enter #"<<i+1<<": ";
	while(i<size&&cin>>ar[i]){
		i++;
		if(i<size)
		cout<<"Next enter #"<<i+1<<": ";
	}
	if(0==i)
		return 0;
	else
		return i;

}

void Show_array(double ar[],int size){
	cout<<"-----------value-----------\n";
	for(int i=0;i<size;i++){
		cout<<"value #"<<i+1<<": "<<ar[i]<<endl;
	}
}


void Reverse_array(double ar[],int size){
	double temp;
	double* begin=ar+1;
	double* end = ar+size-2;
	while(begin!=end&&end>begin){
		temp=*begin;
		*begin=*end;
		*end=temp;
		begin++;
		end--;
	}

}
