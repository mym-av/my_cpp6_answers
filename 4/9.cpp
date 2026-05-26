#include<iostream>

struct CandyBar{
        char name[20];
        double weight;
        int calorie;
};




int main(){
        using namespace std;
        CandyBar* snack = new CandyBar[3]{};
        cout<<snack[0].name<<endl;
        cout<<snack[0].weight<<endl;
        cout<<snack[0].calorie<<endl;

	delete[] snack;



return 0;
}

