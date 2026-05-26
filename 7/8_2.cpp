#include<iostream>
using namespace std;
const int Seasons = 4;

const char* Sname[]={
	"Spring",
	"Summer",
	"Fall",
	"Winter"
};

struct Expenses{
	double val[Seasons];
};


void Fill(Expenses* ps,int size);

void Show(Expenses Val,int size);


int main(){
	Expenses Val;
	Fill(&Val,Seasons);
	Show(Val,Seasons);





	return 0;
}


void Fill(Expenses* ps,int size){
	for(int i=0;i<size;i++){
		cout<<"Enter "<<Sname[i]<<" expenses: ";
		cin>>ps->val[i];

	}

}

void Show(Expenses Val,int size){
	double total=0;
	cout<<"EXPENSES\n";
	for(int i=0;i<size;i++){
		cout<<Sname[i]<<" $"<<Val.val[i]<<endl;
		total+=Val.val[i];
	}

	cout<<"Total Expenses: $"<<total<<endl;

}
