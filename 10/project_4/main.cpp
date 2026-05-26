#include<iostream>
#include"sales.h"
using namespace std;

const int ArSize = 4;

int main(){
	using namespace SALES;
	Sales s1;
	Sales s2;
	const double val[ArSize] = {10.0,20.0,30.0,40.0};
	s1.setSales();
	s2.setSales();
	s1.show();
	s2.show();

	return 0;
}
