#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

const int ArSize = 20;

struct donor{
        char name[ArSize];
        double money;
};



int main(){
        int size;
        int i;
        int k=0;
        int P_count=0;
        int G_count=0;
        ifstream fin;
	cout<<"Enter donor.txt"<<endl;
	fin.open("donor.txt");
	if(!fin.is_open()){
		cout<<"open donor.txt fail\n";
		exit(-1);

	}	
	 if(!(fin>>size)||size<0)
                exit(-1);	
	cout<<"Enter donor number: "<<size<<endl;
        donor* ptr = new donor[size];
        fin.get();
        for(i=0;i<size;i++){
                cout<<"donor #"<<i+1<<": \n";
                cout<<"Enter donor name: ";
                fin.getline((ptr[i].name),ArSize);
		cout<<ptr[i].name<<endl;
                cout<<"Enter donor money: ";
                (fin>>(ptr[i].money)).get();
		cout<<ptr[i].money<<endl;
        }

        for(i=0;i<size;i++){
                if(ptr[i].money<=10000){
                        if(k==0){
                                cout<<"Patrons: "<<endl;
                                k++;
                        }
                        cout<<ptr[i].name<<": "<<ptr[i].money<<endl;
                        continue;
                }
                P_count++;
        }
        if(P_count==size)
                cout<<"none Patrons\n";

        for(i=0;i<size;i++){
                if(ptr[i].money>10000){
                        if(k==1){
                                cout<<"Grand Patrons: \n";
                                k++;
                        }

                        cout<<ptr[i].name<<": "<<ptr[i].money<<endl;
                        continue;
                }
                G_count++;
        }
        if(G_count==size)
                cout<<"none Grand Patrons"<<endl;



        delete[] ptr;
	fin.close();
        return 0;
}
       
