#include<iostream>
#include"sales.h"
using namespace std;

namespace SALES{
	Sales::Sales(const double ar[],int n){
		double max = ar[0];
		double min = ar[0];
		double total = 0;
		int i;
		for(i=0;i<n;i++){
			sales[i]=ar[i];		
			total+=ar[i];
		}
		if(n>0)
			m_average = total/n;
		for(i=0;i<n;i++){
			if(ar[i]>max)
				max = ar[i];
			if(ar[i]<min)
				min = ar[i];
		}
		m_max = max;
		m_min = min;
	}

	Sales::Sales(){
		for(int i=0;i<QUARTERS;i++)
			sales[i]=0;
		m_max = 0;
		m_min = 0;
		m_average = 0;
	}

	void Sales::setSales(){
		int ch;
		int i=0;
		int j;
		double val;
		double arr[QUARTERS]={};
		m_average = 0;
		cout<<"Enter sales"<<i+1<<"# (q to quit): ";
		while(i<QUARTERS&&cin>>val){
			arr[i++] = val;
			if(i<4)
				cout<<"Enter sales"<<i+1<<"# ";
		}
		if(!cin){
			cin.clear();
			while((ch=cin.get())!='q'&&ch != 'Q')
				continue;
		}
		*this = Sales(arr,i);
	}

	void Sales::show()const{
		for(int i=0;i<QUARTERS;i++){
			if(sales[i]=='q')
				break;
			cout<<"---------------\n";
			cout<<"sales"<<i+1<<"# "<<sales[i]<<endl;
		}

		cout<<"average: "<<m_average<<endl;
		cout<<"max: "<<m_max<<endl;
		cout<<"min: "<<m_min<<endl;
	}
}
