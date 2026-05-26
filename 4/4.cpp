#include<iostream>
#include<string>



int main(){
	using namespace std;
	string name;
	string surname;
	string combination;
	cout<<"Enter your first name: ";
	getline(cin,name);
	cout<<"Enter your last name: ";
	getline(cin,surname);
	combination=surname+", "+name;
	cout<<"Here's the information in a single string: "<<combination<<endl;	






return 0;
}
