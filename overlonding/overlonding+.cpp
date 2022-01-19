#include <iostream>
using namespace std;

// 加号运算符重载

class Persion
{
public:

int m_a;
int m_b;


// // 1.成员函数重载+号
// Persion operator+(Persion  &p)    //  Persion  为返回值类型
// {
// Persion tmp;
// tmp.m_a = this->m_a + p.m_a;
// tmp.m_b = this->m_b + p.m_b;

// return (tmp);
// }

};




// 2.全局函数重载+号

Persion operator+(Persion &p1,Persion &p2)
{
    Persion temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;

return(temp);       // 没有返回值时  只返回最后计算的值  p3.m_a=  40 （这应该时m_b 的值—）  p3.m_b=  0
}



void test01()
{

Persion p1;
    p1.m_a = 10;
    p1.m_b = 10;

Persion p2;
    p2.m_a = 20;
    p2.m_b = 30;

Persion p3 = p1+p2;

cout << "p3.m_a=  " << p3.m_a << endl;
cout << "p3.m_b=  " << p3.m_b << endl;
}

// 没写重载时会出现报错  没有与之匹配的 + 运算符








int main ()
{

test01();

return 0;
}
