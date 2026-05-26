#ifndef GOLF_H_
#define GOLF_H_
// golf.h -- 用于 pe9-1.cpp
const int Len = 40;
const int ArSize = 5;
struct golf
{
    char fullname[Len];
    int handicap;
};

// 非交互式版本：
// 函数使用作为参数传递给它的值，将 golf 结构设置为提供的姓名和 handicap
void setgolf(golf & g, const char * name, int hc);

// 交互式版本：
// 函数从用户处请求姓名和 handicap
// 并将 g 的成员设置为输入的值
// 如果输入了姓名则返回 1，如果姓名为空字符串则返回 0
int setgolf(golf & g);

// 函数将 handicap 重置为新值
void handicap(golf & g, int hc);

// 函数显示 golf 结构的内容
void showgolf(const golf & g);

#endif
