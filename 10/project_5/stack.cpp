#include<iostream>
#include"stack.h"

double Stack::total = 0.0;

Stack::Stack(){

	top = 0;
}

bool Stack::isempty()const{
	
	return top==0;

}

bool Stack::isfull()const{
	
	return top==MAX;

}

bool Stack::push(const Item& item){
	
	if(top<MAX){
		items[top++]=item;
		return true;
	}else{

		return false;
	}
}


bool Stack::pop(Item& item){

	if(top>0){
		item=items[--top];
		set_total();
		return true;
	}else{
		return false;
	}

}

void Stack::set_total(){

	total+=items[top].payment;
	std::cout<<"Total: "<<total<<std::endl;
}

