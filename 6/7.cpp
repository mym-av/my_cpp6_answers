#include<iostream>
#include<cctype>
using namespace std;

const int ArSize = 20;


int main(){
	char word[ArSize];
	int vowels=0;
	int consonants=0;
	int others=0;
	cout<<"Enter words (q to quit): "<<endl;

	while(cin>>word&&(word[0]!='q'||word[1]!='\0')){

		if(isalpha(word[0])){
			switch(word[0]){
				case 'a':
				case 'A': 
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':   vowels++; break;	
				default:    consonants++; 
			}
		}else{
			others++;		
		}

	}

	cout<<vowels<<" words beginning with vowels\n";
	cout<<consonants<<" words beginning with consonants\n";
	cout<<others<<" others\n";




	return 0;
}
