# 运算符重载

对已有运算符进行重新定义，赋予其另一种功能，以适应不同的数据类型。

> 主函数   类    实现特定加法的程序

```
#include <iosteeam>
using namespace std;


//类

class Persion
{
public:

int m_a;
int m_b;


// 全局函数

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


// 主函数

int main ()
{
test01();
return 0;
}
```
> 在调用前填写相应程序。



## 1.成员函数重载加法运算符

- 代码写在类中。


```
 // 1.成员函数重载+号


 //Persion  为返回值类型
 Persion operator+(Persion  &p)    
 {

 Persion tmp;
 tmp.m_a = this->m_a + p.m_a;
 tmp.m_b = this->m_b + p.m_b;

 return (tmp);

 }
```


## 2.全局函数重载加法运算符

- 代码写在调用前面。
- 传入两个对象。

```
// 2.全局函数重载+号

Persion operator+(Persion &p1,Persion &p2)
{

    Persion temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;

return(temp); 

}
```

> 注意应用场景，及应用方式。

> 返回值类型。

> operator+ （算子+） 函数