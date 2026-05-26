#include<iostream>
#include<array>

const int MAX = 10;

int main(){
	using namespace std;
	array<double,MAX> val;
	int i=0;
	double sum=0;
	double avg;
	int count=0;
	cout<<"value #"<<i+1<<": ";
	while(i<MAX&&cin>>val[i]){
		sum+=val[i];
		i++;
		if(i<MAX)
		cout<<"value #"<<i+1<<": ";
	}
	if(i==0)
		cout<<"No data.\n";
	else
		avg=sum/i;

	for(int j=0;j<i;j++){
		if(val[j]>avg)
			count++;
	}

	cout<<"Avg = "<<avg<<endl;
	cout<<"count = "<<count<<endl;





	return 0;
}
