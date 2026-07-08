#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd{
	private:
		char* performers;
		char* label;
		int selections;
		double playtime;
	protected:
		enum { MAX = 50};	
	public:
		Cd(const char* s1,const char* s2 ,int n,double x);
		Cd(const Cd& d);
		Cd();
		virtual ~Cd();
		Cd& operator=(const Cd& d);
		virtual void Report()const;
};

class Classic : public Cd{
	private:
		char* major;
	public:
		Classic();
		Classic(const char* m,const char* s1,const char* s2,int n,double x);
		~Classic();
		void Report()const;
		Classic& operator=(const Classic& d);
		Classic(const Classic& d);
};
#endif
