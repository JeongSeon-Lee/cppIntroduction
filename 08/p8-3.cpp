#include <iostream>
#define PI 3.14
using namespace std;

class CPoint {
protected : 
    int x, y;

public : 
    CPoint(int a = 0, int b = 0) : x(a), y(b) { }
    void Move(int a, int b) { x += a; y += b; }
    void Draw() { cout << "(" << x << ", " << y << ")를 한 점으로 가지는 직선을 그리시오." << endl; }
};

class CCircle : public CPoint {
private :
    double Radius;

public : 
    CCircle(int a = 0, int b = 0, double r = 0) : CPoint(a, b), Radius(r) { }
    void Draw() { cout << "중심 (" << x << ", " << y << "), 반지름 " << Radius << "인 원을 그리시오." << endl; }
    double GetArea() { return (PI * Radius * Radius ); }
};

int main(void)
{
    CCircle cir(1, 1, 1);

    cir.CPoint::Draw();
    cir.Draw();
    cout << "원의 면적 : " << cir.GetArea() << endl;

    cir.Move(1, 1);
    cout << endl << "x, y 값 이동 후" << endl;
    cir.CPoint::Draw();
    cir.Draw();
    cout << "원의 면적 : " << cir.GetArea() << endl;

    return 0;
}