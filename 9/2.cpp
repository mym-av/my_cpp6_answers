#include<iostream>
#include<string>
#include<cstring>

void strcount(const std::string& );

int main(){
	using namespace std;
	string input;
	cout<<"Enter a line:\n";
	getline(cin,input);
	/*while(strcmp(input.c_str(),"")){
		strcount(input);	
		cout<<"Enter next line (empty line to quit): \n";
		getline(cin,input);
	}*/
	while(input.size()>0){
                strcount(input);
                cout<<"Enter next line (empty line to quit): \n";
                getline(cin,input);
        }
	return 0;
}

void strcount(const std::string& str){

	using namespace std;
	static int total = 0;
	int count = 0;

	cout<<"\""<<str<<"\" contains ";	
	for(int i=0;i<str.size();i++)
		count++;
	total+=count;
	cout<<count<<" characters\n";
	cout<<total<<" characters total\n";
}
