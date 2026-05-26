#include<iostream>
#include<cctype>
#include"stack.h"



int main(){
	using namespace std;
	Stack st;
	char ch;
	customer po;
	cout<<"Please enter A to add a purchase order,\n"
		<<"P to process a PO, or Q to quit.\n";
	while(cin>>ch && toupper(ch)!='Q'){
		while(cin.get()!='\n')
			continue;
		if(!isalpha(ch)){
			cout<<'\a';
			continue;
		}
		switch(ch){

			case 'A':
			case 'a': cout<<"Enter a PO payment to add: ";
				  (cin>>po.payment).get();
				  cout<<"Enter a PO fullname: ";
				  cin.getline(po.fullname,35);
				  if(st.isfull())
					  cout<<"stack already fill\n";
				  else
					  st.push(po);
				  break;
			case 'p':
			case 'P': if(st.isempty())
					  cout<<"stack already empty\n";
				  else{
					  st.pop(po);
					  cout<<"PO #"<<po.fullname<<" "<<po.payment<<" popped\n";
				  }
				  break;
		}
		cout<<"Please enter A to add a purchase order,\n"
			<<"P to process a PO, or Q to quit.\n";
	}

	cout<<"Bye\n";
	return 0;
}
