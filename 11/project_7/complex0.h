#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex{
	private:
		double real;
		double imagy;
	public:
		Complex();
		Complex(double n1,double n2);	
		Complex operator~();
		Complex operator+(const Complex& c)const;
		Complex operator-(const Complex& c)const;
		Complex operator*(const Complex& c)const;
		Complex operator*(double n)const;
		friend Complex operator*(double n,const Complex& c){return c * n;}
		friend std::ostream& operator<<(std::ostream& os,const Complex& c); 
		friend std::istream& operator>>(std::istream& is,Complex& c);
};
#endif
