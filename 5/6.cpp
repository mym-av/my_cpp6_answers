#include<iostream>

const int ArSize=12;
const int Years=3;

int main(){
        using namespace std;
        int sum =0;
	int annual_sales=0;
        int counts[Years][ArSize];
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

	for(int i=0;i<Years;i++,annual_sales=0){
        	cout<<i+1<<" year"<<endl;
		for(int j=0;j<ArSize;j++){
               		
			cout<<mouths[j]<<": ";
                	cin>>counts[i][j];
                	sum+=counts[i][j];
			annual_sales+=counts[i][j];

       	 	}
		cout<<i+1<<" year annual sales: "<<annual_sales<<endl;
	}
        cout<<"sum = "<<sum<<endl;









return 0;
}

