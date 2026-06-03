#ifndef STRING2_H_
#define STRING2_H_
#include<iostream>

class String{
	private:
		char* str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;
	public:
		String();
		String(const char* s);
		String(const String& sb);
		~String();
		String& operator=(const String& sb);
		String& operator=(const char* s);
		int length()const{return len;}
		friend bool operator<(const String& s1,const String& s2);
		friend bool operator>(const String& s1,const String& s2);
		friend bool operator==(const String& s1,const String& s2);
		friend String operator+(const String& s1,const String& s2);
		void stringlow();
		void stringup();
		int has(char c)const;
		char& operator[](int i);
		const char& operator[](int i)const;
		static int HowMany();
		friend std::istream& operator>>(std::istream& is,String& st);
		friend std::ostream& operator<<(std::ostream& os,const String& st);
};
#endif
