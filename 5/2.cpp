#include<iostream>
#include<array>

const int ArSize=101;

int main(){
	using namespace std;
	array<long double , ArSize>fac;
	fac[1]=fac[0]=1.0L;
	for(long double i=2.0;i<ArSize;i++)
	fac[i]=i*fac[i-1];
	for(int i=0;i<ArSize;i++)
		cout<<i<<"! = "<<fac[i]<<endl;







return 0;
}
