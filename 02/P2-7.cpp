#include <iostream>
using namespace std;
 
struct Point
{
    int x, y;
};
 
int main(void)
{
    struct Point *pAry = new struct Point[5];   // 구조체형 포인터 선언과 동시에 초기화

    for (int i = 0; i < 5; i++)
    {
        *(pAry+ i) = { i, i };      // pAry[i] = { i, i };
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << pAry[i].x << ", "<< pAry[i].y << "]" << endl;
    }

    return 0;
}