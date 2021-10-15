// 避免重复引用头文件
#ifndef _cpu_h_       //前_后_  点变_ 
#define _cpu_h_
#endif

#include <iostream>
using namespace std;

enum CPU_Rank {p1=1,p2,p3,p4,p5,p6};

class CPU {
private:                   //有英文冒号
   // int rake;              // 声明的时候返回值类型为  枚举类 
   CPU_Rank rank;            //相当于定于变量
    int frequency;
    float voltage;
public:                    // 有英文冒号

    CPU (CPU_Rank r,int f,float v):rank(r),frequency(f),voltage(v)
    {
        cout<<"CPU构造函数已启动"<<endl;
    }   //注意枚举类下面变量的定义   构造函数的格式 : 括号里的赋值给外部变量  没有return   赋值列表


    ~CPU (){cout << "析构了一个CPU" << endl;}     //endl 后有分号


    void RUN() { cout<< "cpu 开始运行！" << endl;}
    void STOP() { cout << "cpu 停止运行" << endl;}
};                                                       // 注意最后有分号
