#include<iostream>

struct CandyBar{
        char name[20];
        double weight;
        int calorie;
};




int main(){
        using namespace std;
        CandyBar snack[3]={{"Mocha Munch",2.3,350},
			   {"Mymhehtx",5.2,1314},
			   {"Htxhemym",13.14,520}
		     	   };
        cout<<snack[0].name<<endl;
        cout<<snack[0].weight<<endl;
        cout<<snack[0].calorie<<endl;
	
	cout<<snack[1].name<<endl;
        cout<<snack[1].weight<<endl;
        cout<<snack[1].calorie<<endl;

	cout<<snack[2].name<<endl;
        cout<<snack[2].weight<<endl;
        cout<<snack[2].calorie<<endl;





return 0;
}

