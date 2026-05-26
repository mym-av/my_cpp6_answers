#include<iostream>
#include"sales.h"
using namespace std;

namespace SALES{
	void setSales(Sales& s,const double ar[],int n){
		double max = ar[0];
		double min = ar[0];
		double total = 0;
		int i;
		for(i=0;i<n;i++)
			s.sales[i]=ar[i];		
		for(i=0;i<n;i++){
			total+=ar[i];
		}
		s.average = total/n;
		for(i=0;i<n;i++){
			if(ar[i]>max)
				max = ar[i];
			if(ar[i]<min)
				min = ar[i];
		}
		s.max = max;
		s.min = min;
	}

	void setSales(Sales& s){
		int i=0;
		int j;
		double val;
		cout<<"Enter sales"<<i+1<<"# (q to quit): ";
		while(i<QUARTERS&&cin>>val){
			s.sales[i++] = val;
			if(i<4)
			cout<<"Enter sales"<<i+1<<"# ";
		}
		double max = s.sales[0];
                double min = s.sales[0];
                double total = 0;
                for(j=0;j<i;j++){
                        total+=s.sales[j];
                }
                s.average = total/i;
                for(j=0;j<i;j++){
                        if(s.sales[j]>max)
                                max = s.sales[j];
                        if(s.sales[j]<min)
                               min = s.sales[j];
		}
                s.max = max;
                s.min = min;

	}

	void showSales(const Sales& s){
		for(int i=0;i<QUARTERS;i++){
			if(s.sales[i]=='q')
				break;
			cout<<"---------------\n";
			cout<<"sales"<<i+1<<"# "<<s.sales[i]<<endl;
		}

		cout<<"average: "<<s.average<<endl;
		cout<<"max: "<<s.max<<endl;
		cout<<"min: "<<s.min<<endl;
	}
}
