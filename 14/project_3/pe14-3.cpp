#include"queuetp.h"
#include<cstring>
using std::cout;
using std::cin;
using std::endl;

const int Q_Size = 5;

int main(){

	QueueTp<Worker*> items(Q_Size);
	Waiter* wtemp;
	Singer* stemp;
	SingingWaiter* swtemp;
	int ct;
	for(ct=0;ct<Q_Size;ct++){
		char choice;
		cout << "Enter the employee category:\n"
			<< "w: waiter s: singer "
			<< "t: singing waiter q: quit\n";
		cin >> choice;
		while(strchr("wstq",choice)==NULL)
		{
			cout<<"Please enter a w, s, t, or q: ";
			cin>>choice;
		}
		if(choice== 'q' || choice == 'Q')
			break;
		switch(choice)
		{
			case 'w': 
				wtemp = new Waiter;
				items.enqueue(wtemp);
				break;
			case 's': 
				stemp = new Singer;
				items.enqueue(stemp);
				break;
			case 't': 
				swtemp = new SingingWaiter;	
				items.enqueue(swtemp);
				break;
		}
		cin.get();
		items[ct]->Set();
	}
	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		items[i]->Show();
	}
	for(i=0;i<ct;i++){

		delete items[i];
	}

	cout<<"Bye.\n";
	return 0;
}
