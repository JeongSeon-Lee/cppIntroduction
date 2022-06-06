#include <iostream>
using namespace std;
 
int Sum(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0)   // 전부 디폴트 매개 변수
{
    return num1 + num2 + num3 + num4 + num5;
}
 
int main(void)
{
    cout << "Sum():" << Sum() << endl;      // 인수를 안 줄 수도 있음
    cout << "Sum(5):" << Sum(5) << endl;
    cout << "Sum(4, 5):" << Sum(4, 5) << endl;
    cout << "Sum(3, 4, 5):" << Sum(3, 4, 5) << endl;
    cout << "Sum(2, 3, 4, 5):" << Sum(2, 3, 4, 5) << endl;
    cout << "Sum(1, 2, 3, 4, 5):" << Sum(1, 2, 3, 4, 5) << endl;
    return 0;
}