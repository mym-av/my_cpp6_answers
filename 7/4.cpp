#include<iostream>
using namespace std;

long double probability(unsigned numbers,unsigned picks);

int main(){
	int total;
	int choices;
	cout<<"Enter the number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while(cin>>total>>choices&&choices<=total){
		cout<<"You have one chance in ";
		cout<<probability(total,choices);
		cout<<" of winning.\n";
		cout<<"Next two numbers(q to quit):";

	}

	cout<<"bye\n";


	return 0;
}


long double probability(unsigned numbers,unsigned picks){
	long double result=1.0;
	long double n;
	unsigned int p;
	for(n=numbers,p=picks;p>0;p--,n--){

		result=result*1/n;
	}

	return result*1/27;

}

