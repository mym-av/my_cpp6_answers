#include<iostream>
#include"Bkaccount.h"



int main(){
	Bkaccount val1;
	Bkaccount val2("mym","15504820590",1000);
	Bkaccount val3("htx","15077731356",2000);
	val1.show();
	val2.show();
	val3.show();
	val2.Deposit(-500);
	val2.Deposit(1000);
	val3.withdraw(3000);
	val3.withdraw(-100);
	val3.withdraw(1000);
	val2.show();
	val3.show();


	return 0;
}
