#ifndef STOCK20_H_
#define STOCK20_H_
#include<iostream>
class Stock{
private:
	char* company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){
		total_val = share_val * shares;
	}
public:
	Stock(const std::string& co,long n,double pr);
	Stock();
	~Stock();
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	const Stock& topval(const Stock& s)const;
	friend std::ostream& operator<<(std::ostream& os,const Stock& s);
};
#endif
