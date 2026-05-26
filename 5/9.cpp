#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int ArSize = 20;

int main(){
        string name;
        int count=0;
        cout<<"Enter words (to stop, type the word done):"<<endl;
        do{
        cin>>name;

        count++;

        }while(name!="done");

        count-=1;

        cout<<"You entered a total of "<<count<<" words."<<endl;








return 0;
}

