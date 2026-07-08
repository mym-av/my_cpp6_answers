#include"abstract.h"

const int CLIENTS = 4;
const int ArSize = 50;
int main(){
	using std::cout;
	using std::endl;
	using std::cin;

	baseABC* p_clients[CLIENTS];
	char* templabel = new char[ArSize];
	char* tempcolor = new char[ArSize];
	char* tempstyle = new char[ArSize];
	int r;
	char kind;

	for(int i=0;i<CLIENTS;i++){
		cout<<"Enter label: ";
		cin.getline(templabel,ArSize);
		cout<<"Enter rating: ";
		(cin>>r).get();
		cout<<"Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
		while((cin>>kind).get() && (kind!='1'&&kind!='2'&&kind!='3'))
			cout<<"Enter either 1 or 2 or 3: ";
		if(kind == '1'){
			p_clients[i] = new baseDMA(templabel,r);

		}else if(kind == '2'){
			cout<<"Enter color: ";
			cin.getline(tempcolor,ArSize);
			p_clients[i] = new lacksDMA(tempcolor,templabel,r); 
		}else{
			cout<<"Enter style: ";
			cin.getline(tempstyle,ArSize);
			p_clients[i] = new hasDMA(tempstyle,templabel,r);
		}
	}
	cout<<endl;
	for(int i=0;i<CLIENTS;i++){
		p_clients[i]->View();
		cout<<endl;
		delete p_clients[i];

	}

	delete[] templabel;
	delete[] tempcolor;
	delete[] tempstyle;
	cout<<"Done.\n";

	return 0;
}
