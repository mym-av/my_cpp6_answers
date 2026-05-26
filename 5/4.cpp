#include<iostream>

const double profit1=0.1;
const double profit2=0.05;

int main(){
	using namespace std;
	double S_Daphne=100.0;
	double S_Cleo=100.0;
	int count=1;
	do{
		
		S_Cleo=S_Cleo+S_Cleo*profit2;
		
			
		S_Daphne+=10;
		count++;

	}while(S_Cleo<=S_Daphne);
	cout<<"counts = "<<count<<endl;
	cout<<"Cleo = "<<S_Cleo<<endl;
	cout<<"S_Daphne = "<<S_Daphne<<endl;








return 0;
}
