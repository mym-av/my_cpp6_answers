#include<iostream>
#include"list.h"

List::List(){

	top = 0;

}

bool List::isempty()const{
	
	return top==0;

}

bool List::isfull()const{
	
	return top==MAX;
}

void List::setEmptyList(){
	top = 0;

}

void printList(Item& val){
	
	std::cout<<"val = "<<val<<std::endl;

}


void List::visit(void (*pf)(Item& )){

	for(int i=0;i<top;i++){
		std::cout<<"------("<<i+1<<")--------\n";
		(*pf)(items[i]);
	}

}

bool List::push(const Item& n){

	if(isfull()){
		std::cout<<"error------Fulling---\n";
		return false;
	}else{
		items[top++] = n;
		return true;
	}

}

bool List::pop(){
	
	if(isempty()){
		std::cout<<"error--------Empty---\n";
		return false;
	}else{
		top--;
		return true;
	}

}
