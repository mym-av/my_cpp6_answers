#ifndef GOLF_H_
#define GOLF_H_
// golf.h -- 用于 pe9-1.cpp
class Golf{
	private:
		enum {Len = 40};
		char fullname[Len];
		int handicap;
	public:
		Golf(const char* name,int hc);	
		Golf();
		bool setgolf();
		void sethc(int hc);
		void show()const;
};
#endif
