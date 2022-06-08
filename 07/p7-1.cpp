#include <iostream>
using namespace std;

class CPoint {
private :
    int x, y;

public : 
    CPoint(int a = 0, int b = 0) : x(a), y(b) { }
    CPoint Sum(const CPoint &Po) { return CPoint(x + Po.x, y + Po.y); }
    CPoint Sub(const CPoint &Po) { return CPoint(x - Po.x, y - Po.y); }
    CPoint Invert() { return CPoint(x = -x, y = -y); }
    CPoint Move(int a = 0, int b = 0) { return CPoint(x += a, y += b); }
    CPoint Inc() { return CPoint(x += 1, y += 1); }
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
    CPoint P1(1, 1);
    CPoint P2(2, 2);
    CPoint P3 = P1.Sum(P2);
    CPoint P4 = P1.Sub(P2);
    CPoint P5 = P1.Invert();
    CPoint P6 = P1.Inc();

    P1.Print();
    P2.Print();
    P3.Print();
    P4.Print();
    P5.Print();
    P6.Print();

    return 0;
}