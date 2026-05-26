#include<iostream>



int main(){
	using namespace std;
	int n;
	cout<<"Enter number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--)
			cout<<".";
		for(int k=i;k>0;k--)
			cout<<"*";
		cout<<endl;

	}





return 0;
}
