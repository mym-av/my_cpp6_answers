#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void Setup(string&);


int main(){
	string val;
	cout<<"Enter a string (q to quit): ";
	while(getline(cin,val)){
		if(val[0]=='q')
			break;
		Setup(val);
		cout<<val<<endl;
		cout<<"Next string (q to quit): ";
	}

	cout<<"Bye.\n";

	return 0;
}


void Setup(string& val){

	for(int i=0,n=val.size();i<n;i++){
		if(val[i]>='a'&&val[i]<='z')
			val[i]=toupper(val[i]);
	}

}
