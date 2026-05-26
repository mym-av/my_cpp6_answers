#include<iostream>
using namespace std;
const int MAX = 5;

double* fill_array(double* begin,double* end);
void show_array(const double*begin , double* end);
void revalue(double r ,double* begin, double* end);


int main(){
	double properties[MAX];
	double* end = fill_array(properties,properties+MAX);
	show_array(properties,end);
	if(end>properties){
		cout<<"Enter revaluation factor: ";
		double factor;
		while(!(cin>>factor)){
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input; Please enter a number: ";

		}
		revalue(factor,properties,end);
		show_array(properties,end);

	}
	cout<<"Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double* fill_array(double* begin,double* end){
	double temp;
	int i=0;
	while(begin!=end&&end>begin){

		cout<<"Enter value #"<<(i+1)<<": ";
		cin>>temp;
		if(!cin){
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input process terminated.\n";
			break;
		}
		else if(temp<0)
			break;
		*begin = temp;
		begin++;
		i++;
	}
	return begin;
}

void show_array(const double* begin,double* end){
	int i=0;
	while(begin!=end&&begin<end){
		cout<<"Property #"<<i+1<<": $";
		cout<<*begin<<endl;
		begin++;
		i++;
	}

}

void revalue(double r,double* begin,double* end){

	while(begin!=end&&begin<end){
		(*begin)*=r;
		begin++;
	}
}
