#include<iostream>

using namespace std;

struct Pizza{
        char name[20];
        double diameter;
        double weight;
};



int main(){
        Pizza* my_pizza = new Pizza;
        cout<<"Enter pizza diameter: ";
        cin>>(my_pizza->diameter);
        cout<<"Enter pizza name: ";
	cin.get();
        cin.getline(my_pizza->name,20);
        cout<<"Enter pizza weight: ";
        cin>>my_pizza->weight;
        cout<<my_pizza->name<<endl;
        cout<<my_pizza->diameter<<endl;
        cout<<my_pizza->weight<<endl;
	
	delete my_pizza;






return 0;
}

