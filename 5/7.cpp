#include<iostream>
using namespace std;

const int ArSize = 20;

struct car{
	char name[ArSize];
	int year;

};


int main(){
	int n;
	cout<<"How many cars do you wish to catalog? ";
	(cin>>n).get();
	car* ptr = new car[n];
	
	for(int i=0;i<n;i++){
		cout<<"Car #"<<i+1<<":"<<endl;
		cout<<"Please enter the make: ";
		cin.get(ptr[i].name,ArSize).get();
		cout<<"Please enter the year made: ";
		(cin>>(ptr[i].year)).get();
	}

	cout<<"Here is your collection:"<<endl;
	for(int i=0;i<n;i++){

		cout<<ptr[i].year<<" "<<ptr[i].name<<endl;


	}







	delete[] ptr;
	return 0;
}
