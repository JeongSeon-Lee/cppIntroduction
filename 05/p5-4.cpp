#include <iostream>
using namespace std;

class CPoint {
private : 
    int x, y;

public : 
    CPoint &SetX(int a) { x = a; return (*this); }
    CPoint &SetY(int b) { y = b; return (*this); }
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
    CPoint P1;

    P1.SetX(3).SetY(4);
    P1.Print();

    P1.SetY(6).SetX(5);
    P1.Print();

    return 0;
}