#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    // 将数组 ar 中的 4 或 n 个项（取较小者）复制到 s 的 sales 成员中，
    // 并计算和存储所输入项的平均值、最大值和最小值；
    // sales 中剩余的元素（如果有）设置为 0
    void setSales(Sales & s, const double ar[], int n);
    // 交互式地收集 4 个季度的销售数据，将它们存储在 s 的 sales 成员中，
    // 并计算和存储平均值、最大值和最小值
    void setSales(Sales & s);
    // 显示结构 s 中的所有信息
    void showSales(const Sales & s);
}

#endif
