#include<iostream>
#include<cctype>

const int ArSize = 30;


int main(){
	using namespace std;
	int i=0;
	int j=0;
	char ch;
	char arr[ArSize];

	cout<<"Enter characters: ";
	while((ch=cin.get())!='@'){
		
		if(ch>='a'&&ch<='z')
			arr[i]=toupper(ch);
		else if(ch>='A'&&ch<='Z')
			arr[i]=tolower(ch);
		else 
		    arr[i]=ch;
		i++;

	}
	
	for(j=0;j<i;j++){
		if(isalpha(arr[j])||isspace(arr[j]))
			cout<<arr[j];
	}
		cout<<endl;	
	







return 0;
}
