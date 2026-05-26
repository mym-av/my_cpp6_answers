#include<iostream>
#include<cstdlib>
using namespace std;

const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[],int n);


int main(){
	cout<<"Enter class size: ";
	int class_size;
	(cin>>class_size).get();
	if(!cin){
	cin.clear();
	while(cin.get()!='\n')
		continue;
	cout<<"Bad input: \n";
	exit(-1);
	}
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu,class_size);
	for(int i=0;i<entered;i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete[] ptr_stu;
	cout<<"Dnoe\n";
	return 0;
}

int getinfo(student pa[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"stuedent #"<<i+1<<": \n";
		cout<<"Enter fullname: ";
		if(!(cin.get(pa[i].fullname,SLEN))){
			cout<<"Bad input: \n";	
			break;
		}
		cin.get();
		cout<<"Enter hobby: ";
		cin.getline(pa[i].hobby,SLEN);
		cout<<"Enter ooplevel: ";
		(cin>>pa[i].ooplevel).get();
	}

	return i;
}


void display1(student st){
	cout<<"----------student-----------\n";
	cout<<"Fullname: "<<st.fullname<<endl;
	cout<<"Hobby: "<<st.hobby<<endl;
	cout<<"Ooplevel: "<<st.ooplevel<<endl;
}

void display2(const student* ps){

	cout<<"----------student-----------\n";
	cout<<"Fullname: "<<ps->fullname<<endl;
	cout<<"Hobby: "<<ps->hobby<<endl;
	cout<<"Ooplevel: "<<ps->ooplevel<<endl;

}


void display3(const student pa[],int n){

	for(int i=0;i<n;i++){
		cout<<"student #"<<i+1<<": \n";
		cout<<"Fullname: "<<pa[i].fullname<<endl;
		cout<<"Hobby: "<<pa[i].hobby<<endl;
		cout<<"Ooplevel: "<<pa[i].ooplevel<<endl;
	}	

}
