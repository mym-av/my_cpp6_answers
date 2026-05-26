#include<iostream>
using namespace std;

struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box val);

void my_set(box* );

int main(){
	box val={"mymhehtx",10,20,30,0};
	show(val);
	my_set(&val);	
	show(val);



	return 0;
}

void show(box val){
	cout<<"----------vaule-----------\n";
	cout<<"Maker: "<<val.maker<<endl;
	cout<<"Height: "<<val.height<<endl;
	cout<<"Width: "<<val.width<<endl;
	cout<<"Length: "<<val.length<<endl;
	cout<<"Volume: "<<val.volume<<endl;

}

void my_set(box* val){

	val->volume=(val->height)*(val->length)*(val->width);


}
