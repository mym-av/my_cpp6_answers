#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt{
	private:
		enum {Lbs_per_stn = 14 };
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt();
		Stonewt(double lbs);
		Stonewt(int stn,double lbs);
	        ~Stonewt();
		void show_stn()const;
		void show_lbs()const;
		explicit operator double()const;
		friend bool operator>(const Stonewt& t1,const Stonewt& t2);
		friend bool operator>=(const Stonewt& t1,const Stonewt& t2);
		friend bool operator<(const Stonewt& t1,const Stonewt& t2);
		friend bool operator<=(const Stonewt& t1,const Stonewt& t2);
		friend bool operator==(const Stonewt& t1,const Stonewt& t2);
		friend bool operator!=(const Stonewt& t1,const Stonewt& t2);
};
#endif
