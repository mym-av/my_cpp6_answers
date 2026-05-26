#include<iostream>
#include<array>



int main(){
	using namespace std;
	array<int,3> grades;
	cout<<"First grade: ";
	cin>>grades[0];
	cout<<"Second grade: ";
	cin>>grades[1];
	cout<<"Third grade: ";
	cin>>grades[2];


	cout<<"counts: 3\n";
	cout<<"avg = "<<(grades[0]+grades[1]+grades[2])/3<<endl;









return 0;
}
