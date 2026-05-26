#ifndef BKACCOUNT_H_
#define BKACCOUNT_H_

class Bkaccount{
	private:
		enum {MAX = 20};
		char m_name[MAX];
		char m_account[MAX];
		double m_money;
	public:
		Bkaccount();
		Bkaccount(const char*name, const char* account,double money);
		void show()const;
		bool Deposit(const double& money);
		bool withdraw(const double& money);


};	
#endif
