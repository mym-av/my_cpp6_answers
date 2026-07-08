#ifndef ABSTRACT_H_
#define ABSTRACT_H_

#include<iostream>

class baseABC{
	private:
		char* label;
		int rating;
	public:
		baseABC(const char* l = "Null",int r = 0);
		baseABC(const baseABC& rs);
		virtual ~baseABC();
		baseABC& operator=(const baseABC& rs);
		friend std::ostream& operator<<(std::ostream& os,const baseABC& rs);
		virtual void View()const = 0;
};

class baseDMA : public baseABC{
	public:
		baseDMA(const char* l = "Null",int r =0);
		friend std::ostream& operator<<(std::ostream& os,const baseDMA& rs);
		void View()const;
};

class lacksDMA : public baseABC{
	private:
		enum { COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char* c = "blank",const char* l = "Null", int r = 0);
		friend std::ostream& operator<<(std::ostream& os,const lacksDMA& rs);
		void View()const;
};

class hasDMA : public baseABC{
	private:
		char* style;
	public:
		hasDMA(const char* s = "none",const char* l = "Null",int r = 0);
		hasDMA(const hasDMA& hs);
		hasDMA& operator=(const hasDMA& hs);
		friend std::ostream& operator<<(std::ostream& os,const hasDMA& hs);
		void View()const;
		~hasDMA();
};
#endif
