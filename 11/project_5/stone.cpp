#include<iostream>
#include"stonewt.h"

using std::cout;

int main(){
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21,8);
	Stonewt total;	

	cout<<"The celebrity weighed ";
	cout<<incognito;
	cout<<"The detecitive weighed ";
	cout<<wolfe;
	cout<<"The President weighed ";
	cout<<taft;

	incognito = 276.8;
	taft = 325;
	cout<<"After dinner, the celebrity weighed ";
	cout<<incognito;
	cout<<"After dinner, the President weighed ";
	cout<<taft;
	
	total = incognito + taft;
	cout<<total;
	total = incognito - taft;
	cout<<total;

	total = 10 * taft;
	total.stn_mode();
	cout<<total;

	return 0;
}


