#include<iostream>
#include<cstring>
#include"Bkaccount.h"

using namespace std;

Bkaccount::Bkaccount(){

	strcpy(m_name,"");
        strcpy(m_account,"");
	m_money = 0.0;
}

Bkaccount::Bkaccount(const char* name,const char* account,double money){

	strcpy(m_name,name);
	strcpy(m_account,account);
	m_money=money;

}

bool Bkaccount::Deposit(const double& money){

	if(money<0){
		cout<<"Deposit cannot be negative.\n";
		return false;
	}else{
		m_money+=money;
		return true;
	}

}


bool Bkaccount::withdraw(const double& money){
	if(money>=0&&money<=m_money){
		m_money-=money;
		return true;
	}else{
		cout<<"Withdrawal cannot exceed balance and cannot be negative.\n";
		return false;
	}
}

void Bkaccount::show()const{
	cout<<"---------------\n";
	cout<<"name: "<<m_name<<endl;
	cout<<"account: "<<m_account<<endl;
	cout<<"money: "<<m_money<<endl;
}
