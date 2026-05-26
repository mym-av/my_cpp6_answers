#include<iostream>
using namespace std;

void showmenu();

int main(){
	char ch;
	cout<<"Please enter one of the following choices(Q exit): \n";
	showmenu();
	while((ch=cin.get())!='Q'){
		cin.get();
		switch(ch){
			case 'c': cout<<"carnivore."<<endl; break;
			case 'p': cout<<"pianist."<<endl; break;
			case 't': cout<<"A maple is a tree."<<endl; break;
			case 'g': cout<<"game."<<endl; break;
			default:  cout<<"Please enter a,c,p,t,or g: ";


		}
	}



	return 0;
}


void showmenu(){

	cout<<"c) carnivore		p) pianist"<<endl;
	cout<<"t) tree			g) game"<<endl;




}









