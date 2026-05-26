#include<iostream>
#include<cstring>
#include"golf.h"
using namespace std;

void setgolf(golf& g,const char* name,int hc){

	strcpy(g.fullname,name);
	g.handicap = hc;

}


int setgolf(golf& g){
	int ch;
	cout<<"Enter golf fullname: ";
	while(!cin.get(g.fullname,Len)){
		cin.clear();
		while((ch=cin.get())!='\n')
			continue;
		cout<<"Enter NULL string:\n";
		return 0;
	}
	cout<<"Enter golf handicap: ";
	(cin>>g.handicap).get();
	return 1;
}

void handicap(golf& g,int hc){

	g.handicap = hc;

}


void showgolf(const golf& g){
	cout<<"---------------\n";
	cout<<"golf name: "<<g.fullname<<endl;
	cout<<"golf.handicap: "<<g.handicap<<endl;
	
}
