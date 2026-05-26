#include<iostream>
#include"sales.h"
using namespace std;


int main(){
	using namespace SALES;
	Sales s1;
	Sales s2;
	const double val[QUARTERS] = {10.0,20.0,30.0,40.0};
	setSales(s1,val,QUARTERS);
	setSales(s2);
	showSales(s1);
	showSales(s2);

	return 0;
}
