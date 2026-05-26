#include<iostream>
using namespace std;

void showmenu();
const int strsize = 20;
const int p_max=5;

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};



int main(){
	char ch;
	int i=0;
	bop val[p_max]={{"Wimp Macho","CEO","ByteMe",1},
		{"Raki Rhodes","CTO","Typelt",0},
		{"Celia Laiter","VP","InkBox",2},
		{"Hoppy Hipman","HR","TapLog",2},
		{"Pat Hand","PM","PopInk",0}
	}; 
	cout<<"Benevolent Order of Programmers Report\n";
	showmenu();
	cout<<"Enter your choice: ";
	while((ch=cin.get())!='q'){
		cin.get();
		switch(ch){
			case 'a': 
				for(i=0;i<p_max;i++){
					cout<<val[i].fullname<<endl;
				}
				break;
			case 'b':
				for(i=0;i<p_max;i++)
					cout<<val[i].title<<endl;
				break;
			case 'c': 
				for(i=0;i<p_max;i++)
					cout<<val[i].bopname<<endl;
				break;
			case 'd': 	
				for(i=0;i<p_max;i++){
					if(val[i].preference==0)
						cout<<val[i].fullname<<endl;
					else if(val[i].preference==1)
						cout<<val[i].title<<endl;
					else
						cout<<val[i].bopname<<endl;
				}
				break;
			default:
				cout<<"Input error, please re-enter: \n";	
				 break;
		}

			cout<<"Next chioce: ";

	}


		cout<<"Bye.\n";

	return 0;
}

void showmenu(){
	cout<<"a. display by name	b. display by title\n";
	cout<<"c. display by bopname	d. display by preference\n";
	cout<<"q. quit\n";


}














