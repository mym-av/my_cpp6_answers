#ifndef QUEUE_H_
#define QUEUE_H_

class Custmer{
	private:
		long arrive;
		int processtime;
	public:
		Custmer(){ arrive = processtime = 0;}
		void set(long when);
		long when()const{ return arrive;}
		int ptime()const{ return processtime;}
};

typedef Custmer Item;

class Queue{
	private:
		enum {Q_SIZE = 10};
		struct Node{
			Item item;
			struct Node* next;
		};	
		Node* front;
		Node* rear;
		int items;
		const int qsize;
		Queue(const Queue& q):qsize(0){}
		Queue& operator=(const Queue& q){ return *this;}
	public:
		Queue(int qs = Q_SIZE);
		~Queue();
		bool isempty()const;
		bool isfull()const;
		bool enqueue(const Item& item);
		bool dequeue(Item& item);
		int queuecount()const;
};
#endif
