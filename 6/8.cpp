#include<iostream>
#include<fstream>
#include<cstdlib>

const int ArSize = 20;

int main(){
	using namespace std;
	char filename[ArSize];
	char ch;
	int count=0;
	ifstream fin;
	cout<<"Enter filename: ";
	cin>>filename;
	fin.open(filename);
	if(!fin.is_open()){
		cout<<"open "<<filename<<" fail\n";
		exit(-1);
	}
	while(fin.get(ch)){

		cout<<ch;

		count++;
	}

	cout<<"count = "<<count<<endl;

	fin.close();




	return 0;
}
