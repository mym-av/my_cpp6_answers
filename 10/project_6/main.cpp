#include<iostream>
#include"Move.h"




int main(){
	Move m1(20,40);
	Move m2(10,20);
	m1.showmove();
	m2.showmove();
	Move m3 = m2.add(m1);
	m3.showmove();



	return 0;
}
