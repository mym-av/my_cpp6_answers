#include<iostream>
using namespace std;
const int Seasons = 4;

const char* Sname[]={
	"Spring",
	"Summer",
	"Fall",
	"Winter"
};

void Fill(double (*pa)[Seasons],int size);

void Show(double* ar,int size);


int main(){
	double val[Seasons];
	Fill(&val,Seasons);
	Show(val,Seasons);





	return 0;
}


void Fill(double (*pa)[Seasons],int size){
	for(int i=0;i<size;i++){
		cout<<"Enter "<<Sname[i]<<" expenses: ";
		cin>>(*pa)[i];

	}

}

void Show(double* ar,int size){
	double total=0;
	cout<<"EXPENSES\n";
	for(int i=0;i<size;i++){
		cout<<Sname[i]<<" $"<<ar[i]<<endl;
		total+=ar[i];
	}

	cout<<"Total Expenses: $"<<total<<endl;

}
