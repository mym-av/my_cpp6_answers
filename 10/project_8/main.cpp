#include<iostream>
#include"list.h"



int main(){

	List L;
	for(Item i=0;i<10;i++)
		L.push(i);	
	L.visit(&printList);
	L.setEmptyList();
	L.push(100);
	L.push(200);
	L.pop();
	L.visit(&printList);

	return 0;
}
