#include "person.h"
#include<cstring>

const int SIZE = 4;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	Person * items[SIZE];
	std::string fn,ln;
	int ct , n;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the category:\n"
			<< "g: gunslinget p: pokerplayer "
			<< "b: baddude q: quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter a g, p, b, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		cout << "Enter first name: ";
		cin >> fn;
		cout << "Enter last name: ";
		cin >> ln;

		switch(choice)
		{
			case 'g': 
				cout << "Enter number of notches: ";
				cin >> n;
				items[ct] = new Gunslinger(fn,ln,n);
				break;
			case 'p': 
				items[ct] = new PokerPlayer;
				break;
			case 'b':
                                cout << "Enter number of notches: ";
                                cin >> n; 
				items[ct] = new BadDude(fn,ln,n);
				break;
		}

		cin.get();
	}

	cout << "\nHere is your staff:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		items[i]->Show();
	}

	for (i = 0; i < ct; i++)
	{
		delete items[i];
	}

	cout << "Bye.\n";
	return 0;
}
