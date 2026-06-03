#include<iostream>
#include"stack.h"

Stack::Stack(int n){

	pitems = new Item[n];
	top = 0;
	size = n;
}

Stack::~Stack(){

	delete[] pitems;
}

Stack::Stack(const Stack& st){

	pitems = new Item[st.size];
	top = 0;
	for(int i=0;i<st.top;i++){
		pitems[top++] = st.pitems[i];
	}
	size = st.size;
}

Stack& Stack::operator=(const Stack& st){

	delete[] pitems;
	pitems = new Item[st.size];
	top = 0;
	for(int i=0;i<st.top;i++){
		pitems[top++] = st.pitems[i];
	}
	size = st.size;
}

bool Stack::isempty()const{

	return top==0;

}

bool Stack::isfull()const{

	return top==size;

}

bool Stack::push(const Item& item){

	if(top<size){
		pitems[top++]=item;
		return true;
	}else{

		return false;
	}
}


bool Stack::pop(Item& item){

	if(top>0){
		item=pitems[--top];
		return true;
	}else{
		return false;
	}

}

std::ostream& operator<<(std::ostream& os,const Stack& st){

	for(int i=0;i<st.top;i++)
		os<<st.pitems[i]<<std::endl;
	return os;
}

