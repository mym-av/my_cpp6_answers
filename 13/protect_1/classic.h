#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd{
	private:
		char performers[50];
		char label[20];
		int selections;
		double playtime;
	public:
		Cd(const char* s1,const char* s2 ,int n,double x);
		Cd(const Cd& d);
		Cd();
		virtual ~Cd(){}
		Cd& operator=(const Cd& d);
		virtual void Report()const;
};

class Classic : public Cd{
	private:
		char major[50];
	public:
		Classic();
		Classic(const char* m,const char* s1,const char* s2,int n,double x);
		void Report()const;
};
#endif
