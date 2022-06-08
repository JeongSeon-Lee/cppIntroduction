#include <iostream>
using namespace std;

class CPoint {
private :
    int x, y;

public :
    CPoint(int a = 0, int b = 0) : x(a), y(b) { }
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }

    friend CPoint Sum(CPoint A1, CPoint A2);
    friend CPoint Sub(CPoint A1, CPoint A2);
};

CPoint Sum(CPoint A1, CPoint A2)
{
    // CPoint A(A1.x + A2.x, A1.y + A2.y);
    CPoint A;
    A.x = A1.x + A2.x;
    A.y = A1.y + A2.y;
    return A;
}

CPoint Sub(CPoint A1, CPoint A2)
{
    // CPoint A(A1.x - A2.x, A1.y - A2.y);
    CPoint A;               // 임시 객체 생성
    A.x = A1.x - A2.x;
    A.y = A1.y - A2.y;
    return A;               // 임시 객체 반환
}

int main(void)
{
    CPoint P1(1, 2);
    CPoint P2(3, 4);
    CPoint P3 = Sum(P1, P2);    // 복사 생성이 아닌 임시 객체 그대로 사용
    CPoint P4 = Sub(P1, P2);    // 복사 생성이 아닌 임시 객체 그대로 사용

    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();

    return 0;
}