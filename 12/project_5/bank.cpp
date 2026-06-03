// bank.cpp -- 使用 Queue 接口
// 与 queue.cpp 一起编译
#include <iostream>
#include <cstdlib> // 用于 rand() 和 srand()
#include <ctime>   // 用于 time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // 是否有新顾客？

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    // 进行设置
    std::srand(std::time(0)); // 随机初始化 rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs); // 队列最多容纳 qs 个人

    cout << "Enter the number of simulation hours: ";
    int hours;    // 模拟的小时数
    cin >> hours;
    // 模拟将以每分钟一个周期运行
    long cyclelimit = MIN_PER_HR * hours; // 周期数

    cout << "Enter the average number of customers per hour: ";
    double perhour;    // 每小时平均到达人数
    cin >> perhour;
    double min_per_cust;    // 到达之间的平均时间
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;    // 新顾客数据
    long turnaways = 0;    // 因队列已满而离开的人数
    long customers = 0;    // 加入队列的人数
    long served = 0;    // 模拟期间服务的人数
    long sum_line = 0;    // 累计队列长度
    int wait_time = 0;    // 自动柜员机空闲还需的时间
    long line_wait = 0;    // 累计排队时间

    // 运行模拟
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) // 有新顾客到达
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle); // cycle = 到达时间
                line.enqueue(temp); // 将新顾客加入队列
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp); // 服务下一个顾客
            wait_time = temp.ptime(); // 服务 wait_time 分钟
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }

    // 报告结果
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << " turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "average wait time: "
             << (double) line_wait / served << " minutes\n";
    }
    else
    {
        cout << "No customers!\n";
        cout << "Done!\n";
    }

    return 0;
}

// x = 顾客之间的平均间隔时间（分钟）
// 如果这一分钟有顾客到达，返回值为 true
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
