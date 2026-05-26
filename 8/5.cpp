#include<iostream>
using namespace std;

template<class T>
T max5(T arr[],int n = 5);


int main(){
	int arr1[]={1,2,3,4,5};
	double arr2[]={1.5,2.5,3.5,4.5,5.5};

	cout<<max5(arr1)<<endl;
	cout<<max5(arr2)<<endl;



	return 0;
}

template<class T>
T max5(T arr[],int n){
	T temp = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>temp)
			temp = arr[i];
	}
	return temp;
}




