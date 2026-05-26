#include<iostream>
#include<cstring>
using namespace std;

const int ArSize = 20;

struct CandyBar{
	char name[ArSize];
	double weight;
	int calorie;


};

void SetCB(CandyBar&,const char* p = "Millennium",const double m = 2.85,const int n = 350);

void ShowCB(const CandyBar&);

int main(){
	CandyBar val1,val2;
	SetCB(val1);
	ShowCB(val1);
	SetCB(val2,"mymhehtx",13.14,100);
	ShowCB(val2);


return 0;
}


void SetCB(CandyBar& val,const char* p ,const double m ,const int n){

	strncpy(val.name,p,ArSize);
	val.weight = m;
	val.calorie = n;

}

void ShowCB(const CandyBar& val){

	cout<<"Name: "<<val.name<<endl;
	cout<<"Weight: "<<val.weight<<endl;
	cout<<"Calorie: "<<val.calorie<<endl;


}
