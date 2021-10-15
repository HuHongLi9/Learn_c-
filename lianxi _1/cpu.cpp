#include "cup.h"

int main ()
{
CPU a (p2,3200,12.0);    //  CPU (1,20,12);  要使用枚举类中的量 而不是数字  注意不是整型做计算时，要加小数点进行类型匹配

//cout << "rank = \t" << CPU::rank << endl;      // rank 为私有成员，禁止访问

a.RUN();
a.STOP();
return 0;
}