#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt{
	public:	
		enum Mode{PDS,STN,Lbs_per_stn = 14 };
	private:
		int stone;
		double pds_left;
		double pounds;
		Mode mode;
		void set_stn();
		void set_pds();
	public:
		Stonewt();
		Stonewt(double lbs,Mode from = PDS);
		Stonewt(int stn,double lbs,Mode from = STN);
	        ~Stonewt();
		void stn_mode(){ mode = STN;}
		void pds_mode(){ mode = PDS;}
		friend Stonewt operator+(const Stonewt& t1,const Stonewt& t2);
		friend Stonewt operator-(const Stonewt& t1,const Stonewt& t2);
		Stonewt operator*(double n)const;
		friend Stonewt operator*(double n,const Stonewt& st){ return st*n;}
		friend std::ostream& operator<<(std::ostream& os,const Stonewt& st);
};
#endif
