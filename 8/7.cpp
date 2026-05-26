#include<iostream>

struct debts
{
        char name[50];
        double amount;
};


//template <typename T>    // template A
//T SumArray(T arr[], int n);

template<typename T>
double SumArray(T arr[] ,int n);

template<> double SumArray<debts>(debts* val,int n)
{
	double sum=0;
	for(int i=0;i<n;i++){
		sum=sum+(val[i]).amount;
	}
	return sum;
}


int main()
{
	using namespace std;
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};

	cout << "Listing Mr. E's counts of things:\n";
	// things is an array of int
	cout<<SumArray(things, 6)<<endl; 
	cout << "Listing Mr. E's debts:\n";
	cout<<SumArray(mr_E, 3)<<endl;
	return 0;
}

template <typename T>
double SumArray(T arr[], int n)
{
	using namespace std;
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

