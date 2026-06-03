#include<iostream>
#include"cow.h"


int main(){

	Cow calf1;
	Cow calf2("htx","graze",70);
	Cow calf3("lxy","leaves",60);
	Cow calf4 = calf2;
	calf1 = calf3;
	calf1.ShowCow();
	calf2.ShowCow();
	calf3.ShowCow();
	calf4.ShowCow();





	return 0;
}
