#include <iostream>
using namespace std;
 
int main(void)
{
    int i = 5;
    int sum = 0;

    for (int i = 0; i < 100; i++)
        sum += (i + 1);

    cout << "합계 : " << sum << endl;
    cout << i << endl;      // 5로 출력됨

    return 0;
}