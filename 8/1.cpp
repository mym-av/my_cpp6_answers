#include<iostream>
using namespace std;

int count= 0;

void Print(const char*,int n = 0);


int main(){

	Print("mymhehtx");
	Print("htx");
	Print("mym");
	Print("mymhehtx",1);
	Print("love",-1);
	Print("tianxiu",1);


	return 0;
}

void Print(const char*str , int n){
	count++;
	if(n==0){
		cout<<str<<endl;
		return ;
	}else{
		cout<<"-------Print "<<count<<" --------"<<endl;
		for(int i=0;i<count;i++)
			cout<<str<<endl;
		return ;
	}



}
