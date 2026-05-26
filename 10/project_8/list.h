#ifndef LIST_H_
#define LIST_H_

typedef unsigned long Item;

void printList(Item& l);

class List{
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		List();
		void setEmptyList();
		bool isempty()const;
		bool isfull()const;
		bool push(const Item& );
		bool pop();
		void visit(void(*pf)(Item&));
};

#endif
