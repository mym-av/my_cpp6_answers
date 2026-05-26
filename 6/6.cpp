#include<iostream>
#include<cstdlib>
using namespace std;

const int ArSize = 20;

struct donor{
	char name[ArSize];
	double money;
};



int main(){
	int size;
	int i;
	int k=0;
	int P_count=0;
	int G_count=0;
	cout<<"Enter donor number: ";
	if(!(cin>>size)||size<0)
		exit(-1);
	donor* ptr = new donor[size];	
	cin.get();
	for(i=0;i<size;i++){
		cout<<"donor #"<<i+1<<": \n";
		cout<<"Enter donor name: ";
		cin.getline((ptr[i].name),ArSize);
		cout<<"Enter donor money: ";
		(cin>>(ptr[i].money)).get();
	}

	for(i=0;i<size;i++){
		if(ptr[i].money<=10000){
			if(k==0){	
				cout<<"Patrons: "<<endl;
				k++;
			}
			cout<<ptr[i].name<<": "<<ptr[i].money<<endl;
			continue;
		}
		P_count++;
	}
	if(P_count==size)
		cout<<"none Patrons\n";

	for(i=0;i<size;i++){
		if(ptr[i].money>10000){
			if(k==1){		
				cout<<"Grand Patrons: \n";
				k++;
			}	

			cout<<ptr[i].name<<": "<<ptr[i].money<<endl;
			continue;
		}
		G_count++;
	}
	if(G_count==size)
		cout<<"none Grand Patrons"<<endl;



	delete[] ptr;

	return 0;
}
