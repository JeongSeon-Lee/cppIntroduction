#include <iostream>
using namespace std;

/* int sum(int x, int y)
{
    return (x + y);
}
 */
extern "C" int sum(int x, int y) 
{
    return (x + y);
}

extern "C" double sum(double x, double y) // 오버로드된 함수의 두번째 C 링크는 허용되지 않습니다
{
    return (x + y);
}

// extern "C" 키워드를 추가함으로써 C++ 컴파일 시 mangled name을 만들지 않고 함수명만으로 linkage를 구성한다.
// C에서는 오버로딩을 허락하지 않으므로 오류가 난다
int main(void)
{
    cout << sum(1, 2) << endl;
    cout << sum(1.1, 2.2) << endl;
    return 0;
}