#include<iostream>
#include"stonewt.h"

using std::cout;
using std::endl;

void Stonewt::set_stn(){

	stone = int(pounds) / Lbs_per_stn;
	pds_left = int(pounds) % Lbs_per_stn + pounds - int(pounds);	

}

void Stonewt::set_pds(){
	
	pounds = stone * Lbs_per_stn + pds_left;

}

Stonewt::Stonewt(){

	stone = pounds = pds_left = 0;
	mode = PDS;
}

Stonewt::Stonewt(double lbs,Mode form){
	mode = form;
	pounds = lbs;
	set_stn();
}

Stonewt::Stonewt(int stn,double lbs,Mode form){
	mode = form;
	stone = stn;
	pds_left = lbs;
	set_pds();
}

Stonewt::~Stonewt(){


}

Stonewt operator+(const Stonewt& t1,const Stonewt& t2){

	Stonewt sum;
	sum.pounds = t1.pounds + t2.pounds;
	sum.set_stn();
	return sum;
}

Stonewt operator-(const Stonewt& t1,const Stonewt& t2){
	
	Stonewt diff;
	diff.pounds = t1.pounds - t2.pounds;
	diff.set_stn();
	return diff;


}


Stonewt Stonewt::operator*(double n)const{
	
	return Stonewt(pounds * n);
	

}

std::ostream& operator<<(std::ostream& os,const Stonewt& st){

	if(st.mode == Stonewt::STN)
		cout<<st.stone<<" stone, "<<st.pds_left<<" pounds\n";
	else if(st.mode == Stonewt::PDS)
		cout<<st.pounds<<" pounds\n";
	else
		cout<<"There is no other choice\n";		
}
