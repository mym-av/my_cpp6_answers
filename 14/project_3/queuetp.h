#ifndef QUEUETP_H_
#define QUEUETP_H_
#include<iostream>
#include<string>

template<class T>
class QueueTp{
	private:
		enum {Q_SIZE = 10};
		struct Node{
			T item;
			struct Node* next;
		};
		Node* front;
		Node* rear;
		const int qsize;
		int items;
	public:
		explicit QueueTp(int qs = Q_SIZE);
		~QueueTp();
		bool isempty()const;
		bool isfull()const;
		int queuecount()const;
		bool enqueue(const T& item);
		bool dequeue(T &item);
		T& operator[](int n);
};

template<class T>
T& QueueTp<T>::operator[](int n){
	
	Node* temp = front;
	for(int i=0;i<n;i++)
		temp = temp->next;
	return temp->item;
}

template<class T>
QueueTp<T>::QueueTp(int qs):qsize(qs){

	front = rear = NULL;
	items = 0;
}

template<class T>
bool QueueTp<T>::isempty()const{

	return items==0;
}

template<class T>
bool QueueTp<T>::isfull()const{

	return items==qsize;
}

template<class T>
int QueueTp<T>::queuecount()const{

	return items;
}

template<class T>
bool QueueTp<T>::enqueue(const T& item){

	if(isfull())
		return false;
	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
		if(front == NULL)
			front = add;
		else
			rear->next = add;
	rear = add;
	return true;
}

template<class T>
bool QueueTp<T>::dequeue(T& item){

	if(isempty())
		return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp; 
	if(items == 0)
		rear = NULL;
			return true;
}

template<class T>
QueueTp<T>::~QueueTp(){

	struct Node* temp;
	while(front!=NULL){
		temp = front;
		front = front->next;
		delete temp;
	}
}

class Worker{
	private:
		std::string fullname;
		long id;
	protected:
		virtual void Data()const;
		virtual void Get();
	public:
		Worker():fullname("no one"),id(0L){}
		Worker(const std::string& s,long n):fullname(s),id(n){}
		virtual ~Worker() = 0;
		virtual void Set() = 0;
		virtual void Show()const = 0;
};

class Waiter : virtual public Worker{
	private:
		int panache;
	protected:
		void Data()const;
		void Get();
	public:
		Waiter():Worker(),panache(0){}
		Waiter(const std::string& s,long n,int pa):Worker(s,n),panache(pa){}
		Waiter(const Worker& wk,int pa):Worker(wk),panache(pa){}
		~Waiter(){}
		void Set();
		void Show()const;
};

class Singer : virtual public Worker{
	protected:
		enum {other,alto,contralto,soprano,bass,baritone,tenor};
		enum {Vtypes = 7};
		void Get();
		void Data()const;
	private:
		static const char* pv[Vtypes];
		int voice;
	public:
		Singer():Worker(),voice(other){}
		Singer(const std::string& s,long n,int v = other):Worker(s,n),voice(v){}
		Singer(const Worker& wk,int v = other):Worker(wk),voice(v){}
		~Singer(){}
		void Set();
		void Show()const;	
};

class SingingWaiter : public Waiter , public Singer{
	protected:
		void Data()const;
		void Get();
	public:
		SingingWaiter():Worker(),Waiter(),Singer(){}
		SingingWaiter(const std::string& s,long n,int pa = 0,int v = other):Worker(s,n),Waiter(s,n,pa),Singer(s,n,v){}
		SingingWaiter(const Worker& wk,int pa = 0,int v = other):Worker(wk),Waiter(wk,pa),Singer(wk,v){}
		SingingWaiter(const Waiter& wa,int v = other):Worker(wa),Waiter(wa),Singer(wa,v){}
		SingingWaiter(const Singer& s,int pa = 0):Worker(s),Singer(s),Waiter(s,pa){}
		void Set();
		void Show()const;
}; 
#endif
