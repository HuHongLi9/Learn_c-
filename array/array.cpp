#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;
 

int main()
{
        // 向量    一维数组
    int n[10];
    for (int i=0; i<10; i++ )
    {
        n[i]=9-i;
    }

    cout << "序号"<< setw(13) << "值" <<endl;

    for (int j=0; j<10; j++ )
    {
        cout <<setw(3) << j << setw(13) << n[j] << endl;
    }

    //多维数组


return 0;
}