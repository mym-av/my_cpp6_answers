#include <iostream>
#include <cstring>    // 用于 strlen(), strcpy()

using namespace std;

struct stringy {
    char * str;    // 指向一个字符串
    int ct;        // 字符串长度（不包括 '\0'）
};
// 下面是 set(), show(), show() 的原型

void set(stringy& , const char* );

void show(const stringy& , int n = 1);

void show(const char* ,int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    
    set(beany, testing);    // 第一个参数是引用，
    // 分配空间以容纳 testing 的副本，
    // 将 beany 的 str 成员设置为指向该新内存块，
    // 将 testing 复制到新内存块，
    // 并设置 beany 的 ct 成员
    show(beany);            // 打印成员字符串一次
    show(beany, 2);         // 打印成员字符串两次
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);          // 打印 testing 字符串一次
    show(testing, 3);       // 打印 testing 字符串三次
    show("Done!");
	delete[] beany.str;
    return 0;
}


void set(stringy& val , const char* str){

	val.str = new char[strlen(str)+1];
	strcpy(val.str,str);
	val.ct = strlen(val.str);

}

void show(const stringy& val , int n){
	for(int i=0;i<n;i++){
		cout<<val.str<<endl;
	}


}

void show(const char* str,int n){

	for(int i=0;i<n;i++){
		cout<<str<<endl;
	}


}








