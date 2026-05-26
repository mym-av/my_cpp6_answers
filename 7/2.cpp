#include<iostream>
using namespace std;

const int ArSize = 10;


int fill(double ar[],int size);
void show(double ar[],int size);
double my_avg(double ar[],int size);

int main(){
	int count;
	double avg;
	double g_val[ArSize];
	count=fill(g_val,ArSize);
	show(g_val,count);
	avg=my_avg(g_val,count);
	cout<<"Avg: "<<avg<<endl;
	return 0;
}

int fill(double ar[],int size){
	int i;

	for(i=0;i<size;i++){
		cout<<"value #"<<i+1<<": ";
		if(!(cin>>ar[i])||ar[i]<0)
			break;

	}
	return i;
}


void show(double ar[],int size){
	cout<<"---------vaules---------\n";
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";		
	}
	cout<<endl;
} 


double my_avg(double ar[],int size){
	double total=0;
	for(int i=0 ;i<size;i++){
		total+=ar[i];
	}

	return total/size;
}






