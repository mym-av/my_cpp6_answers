#include<iostream>
using namespace std;

unsigned long step(int n);


int main(){
	int val;
	unsigned long result;	
	cout<<"Enter number: ";
	while((cin>>val)&&val>0){
		result=step(val);
		cout<<"Result: "<<result<<endl;
		cout<<"Enter number(q to quit ): ";
	}



	return 0;
}

unsigned long step(int n){
	unsigned long val=1;
	unsigned long re=1; 
	if(n>0){
		val*=n;
		re=step(n-1);
		val*=re;
	}

	return val;
}
