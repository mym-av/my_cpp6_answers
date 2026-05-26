#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T maxn (T arr[], int n);


//template<class T>
//T maxn(T* arr[],int n);

template<> const char* maxn<const char* >(const char** ptr , int n){
	int length = strlen(*ptr);
	int max = 0;
	for(int i=0;i<n;i++){
		if(strlen(ptr[i])>length){
			length = strlen(ptr[i]);
			max = i;
		}

	}
	return ptr[max];
}

int main(){
	int arr1[]={1,2,3,4};
	double arr2[]={1.5,2.5,3.5,4.5,5.5,10.5};
	const char* Sname1[]={"Spring","Summer","Fall","winter","mymhehtx"};
	const char* Sname2[]={"mym","htxx","mymhehtx","htxhemym","love"};	


	cout<<maxn(arr1,4)<<endl;
	cout<<maxn(arr2,6)<<endl;
	cout<<maxn(Sname1,5)<<endl;
	cout<<maxn(Sname2,5)<<endl;


	return 0;
}

template<class T>
T maxn(T arr[], int n){
	T temp = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>temp)
			temp = arr[i];
	}
	return temp;
}


