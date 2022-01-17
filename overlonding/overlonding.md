# 运算符重载

对已有运算符进行重新定义，赋予其另一种功能，以适应不同的数据类型。

```
#include <iosteeam>
using namespace std;
int main ()
{

return0;
}
```
> 填写相应程序。



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

> operator+ （算子+） 函数。