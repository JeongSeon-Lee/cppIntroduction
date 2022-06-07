#include <iostream>
using namespace std;

class CCircle {
private :
    int x, y;
    double Radius;
public : 
    CCircle(int a = 0, int b = 0, double r = 1) : x(a), y(b), Radius(r) { }
    double GetArea(int a) { return (3.14 * a * a); }
    void Move(int a, int b) { x += a; y += b; }
    void Print() { cout << "중심 : (" << x << ", " << y << "), "
                        << "면적 : " << GetArea(Radius) << endl; } 
};

int main(void)
{
    CCircle C1;
    CCircle C2(1, 1);
    CCircle C3(2, 2, 2);

    cout << "GetArea 테스트 : " << C1.GetArea(10) << endl;

    C2.Move(3, 3);

    C1.Print();
    C2.Print();
    C3.Print();

    return 0;
}