#include<iostream>
#include"golf.h"

using namespace std;
const int ArSize = 5;

int main(){
	Golf player[ArSize];
	int i;
	int count = 1;
	for(i=0;i<ArSize;i++){
		cout<<"Golf #"<<i+1<<": "<<endl;
		if(!player[i].setgolf())
			break;
		count++;
	}

	for(i=1;i<count;i++)
		player[i-1].show();

	return 0;
}
