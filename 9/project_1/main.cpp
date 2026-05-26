#include<iostream>
#include"golf.h"

using namespace std;


int main(){
	golf val[ArSize];
	int i;
	int j = 1;
	cout<<"Enter golf_"<<j<<"# \n";
	for(i=0,j=1;i<ArSize && setgolf(val[i]);i++,j++){
		if(j==5)
			break;	
		cout<<"Enter golf_"<<j+1<<"# \n";
	}
	
	if(i==4){
		for(i=0;i<ArSize;i++)
			showgolf(val[i]);
	}else{
		for(j=0;j<i;j++)
			showgolf(val[j]);
	}
	



	return 0;
}
