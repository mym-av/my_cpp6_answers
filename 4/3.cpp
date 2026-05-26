#include<iostream>
#include<cstring>


int main(){
	using namespace std;
	char name[20];
	char surname[20];
	char combination[40];
	cout<<"Enter your first name: ";
	cin>>name;
	cout<<"Enter your last name: ";
	cin>>surname;
	strcpy(combination,surname);
	strcat(combination,", ");
	strcat(combination,name);
	cout<<"Here's the information in a single string: "<<combination<<endl;






return 0;
}
