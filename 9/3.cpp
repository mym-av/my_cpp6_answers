#include<iostream>
#include<new>
#include<cstring>
using namespace std;

const int BUF = 128;

const int ArSize = 20;

char buffer[BUF];

struct chaff{
	char dross[ArSize];
	int slag;

};

void setChaff(chaff&);

void showChaff(const chaff& );

int main(){
	
	//chaff* p = new(buffer) chaff[2];
	chaff* p = new chaff[2];	
	for(int i=0;i<2;i++){
		cout<<"-------("<<i+1<<")--------"<<endl;
		setChaff(p[i]);
	}

	for(int i=0;i<2;i++){
	
		showChaff(p[i]);
	}
	delete[] p;
	return 0;
}

void setChaff(chaff& val){
	char name[ArSize];
	cout<<"Enter dross name: ";
	cin.getline(name,ArSize);
	strcpy(val.dross,name);
	cout<<"Enter slag: ";
	(cin>>val.slag).get();
}

void showChaff(const chaff& val){

	cout<<"dross name: "<<val.dross<<endl;
	cout<<"slag: "<<val.slag<<endl;

}
