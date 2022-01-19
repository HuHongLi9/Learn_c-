/*
*******************************
运算符重载  左移  <<

能够 输出自定义输出类型。
*******************************
*/

#include <iostream>
using namespace std;


class Persion
{

public:

    int m_a;
    int m_b;

};

// 利用全局函数 实现左运算符重载

ostream & operator<< (ostream & cout , Persion p)
{

cout << "重载后  p.m_a =  " << p.m_a << endl;
cout << "重载后  p.m_b =  " << p.m_b << endl;

return cout;

}



void test01()
{

    Persion p;

    p.m_a = 10;
    p.m_b = 20;
//正常调用成员变量  可以实现输出
cout << "p.m_a 的值为:  " << p.m_a << endl;
cout << "p.m_b 的值为:  " << p.m_b << endl;

// 输出类型为对象时
cout << "对象 p 的值为:  \n" << p << endl;
}

int main()
{

test01();

    return 0;
}