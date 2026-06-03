#include"string2.h"
#include<cstring>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;

int String::num_strings = 0;

String::String(){

	len = 0;
	str = new char[len+1];
	std::strcpy(str,"");
	num_strings++;
}

String::String(const char* s){

	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	num_strings++;
}

String::String(const String& sb){

	len = sb.len;
	str = new char[len+1];
	strcpy(str,sb.str);
	num_strings++;
}


String::~String(){

	--num_strings;
	delete[] str;
}

String& String::operator=(const String& sb){

	if(this == &sb)
		return *this;
	delete[] str;
	len = sb.len;
	str = new char[len+1];
	strcpy(str,sb.str);
	return *this;
}

String& String::operator=(const char* s){

	delete[] str;
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	return *this;
}

bool operator<(const String& s1,const String& s2){

	return (std::strcmp(s1.str,s2.str) < 0 );
}

bool operator>(const String& s1,const String& s2){

	return s2 < s1; 
}

bool operator==(const String& s1,const String& s2){

	return (std::strcmp(s1.str,s2.str) == 0);
}

String operator+(const String& s1,const String& s2){

	String sum;
	delete[] sum.str;
	sum.len = s1.len + s2.len;
	sum.str = new char[sum.len+1];
	std::strcpy(sum.str,s1.str);
	std::strcat(sum.str,s2.str);
	return sum;
}

void String::stringlow(){

	for(int i=0;i<len;i++){
		if(isalpha(str[i])){
			str[i] = tolower(str[i]); 

		}

	}
}

void String::stringup(){

	for(int i=0;i<len;i++){
		if(isalpha(str[i])){
			str[i] = toupper(str[i]);
		}

	}
}

int String::has(char c)const{
	
	int count;
	for(int i=0;i<len;i++){
		if(str[i] == c)
			count++;
	}
	return count;
}

char& String::operator[](int i){

	return str[i];

}

const char& String::operator[](int i)const{

	return str[i];

}

std::ostream& operator<<(std::ostream& os,const String& st){

	cout<<st.str;
	return os;
}

std::istream& operator>>(std::istream& is,String& st){

	char buffer[String::CINLIM];
	is.get(buffer,String::CINLIM);
	if(is)
		st = buffer;
	while(is && is.get()!='\n')
		continue;	
	return is;
}

int String::HowMany(){

	return num_strings; 
}
