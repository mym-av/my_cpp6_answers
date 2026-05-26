#include<iostream>




int main(){
	using namespace std;
	int min;
	int max;
	int sum=0;
	cout<<"Enter min number: ";
	cin>>min;
	cout<<"Enter max number: ";
	cin>>max;
	for(;min<=max;min++){
		sum+=min;
	}
	cout<<"sum = "<<sum<<endl;




return 0;
}
