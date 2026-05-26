#include<iostream>

const int ArSize=12;

int main(){
	using namespace std;
	int sum =0;
	int counts[ArSize];
	const char* mouths[ArSize]={"January",
				   "February",
				   "March",
				   "April",
				   "May",
				   "June",
				   "July",
				   "August",
				   "September",
				   "October",
				   "November",
				   "December"
				  };
	for(int i=0;i<ArSize;i++){
		cout<<mouths[i]<<": ";
		cin>>counts[i];
		sum+=counts[i];		

	}

	cout<<"sum = "<<sum<<endl;









return 0;
}
