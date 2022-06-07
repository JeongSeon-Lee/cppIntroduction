#include <iostream>
using namespace std;

class CMyClass
{
private:
    int i;
public:
    CMyClass(int a)
    {
        i = a;
        cout << "생성자: " << i << endl;
    }
    ~CMyClass()
    {
        cout << "소멸자: " << i << endl;
    }
};

CMyClass M(0); //전역 객체, 제일 먼저 생성된다(제일 마지막으로 소멸된다)

void f(CMyClass LocalM) {  }

int main(void)
{
    CMyClass M1(1); //1 생성
    CMyClass M2[3] = { 2, 3, 4 }; //2, 3, 4 생성
    f(M2[2]); //'4'를 매개변수로 삼는 f 함수
    
    return 0; //생성한 순서의 역순으로 소멸된다
}