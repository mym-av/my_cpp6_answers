#include<iostream>
#include<cstring>
#include"golf.h"
using namespace std;

Golf::Golf(const char* name,int hc){

	strncpy(fullname,name,Len);
	fullname[Len-1]='\0';
	handicap = hc;

}


Golf::Golf(){
	fullname[0]='\0';
	handicap = 0;
}

bool Golf::setgolf(){

	char name[Len];
	int hc;
	cout<<"Enter golf fullname: ";
	while(!cin.get(name,Len)){
		cin.clear();
		while(cin.get()!='\n')
			continue;
		cout<<"Enter NULL string:\n";
			return false;
	}
	cout<<"Enter golf handicap: ";
	(cin>>hc).get();
	*this = Golf(name,hc);
	return true;
}

void Golf::sethc(int hc){

	handicap = hc;

}


void Golf::show()const{
	cout<<"---------------\n";
	cout<<"Golf name: "<<fullname<<endl;
	cout<<"Golf.handicap: "<<handicap<<endl;
	
}
