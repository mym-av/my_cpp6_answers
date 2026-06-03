#include<cstdlib>
#include"queue.h"

Queue::Queue(int qs):qsize(qs){

	front = rear = nullptr;
	items = 0;
}

Queue::~Queue(){
	Node* temp;
	while(front!=NULL){
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty()const{

	if(items == 0)
		return true;
	else 
		return false;
}

bool Queue::isfull()const{
	
	if(items == qsize)
		return true;
	else 
		return false;
}

bool Queue::enqueue(const Item& item){

	if(isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if(front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

bool Queue::dequeue(Item& item){

	if(isempty())
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if(items == 0)
		rear = nullptr;
	return true;
}

int Queue::queuecount()const{

	return items;
}

void Custmer::set(long when){
	
	arrive = when;
	processtime = std::rand() % 3 + 1; 
}
