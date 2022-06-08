#include <iostream>
using namespace std;

class CPoint {
private :
    int x, y;

public :
    CPoint(int a = 0, int b = 0) : x(a), y(b) { }
    CPoint &operator++() { x++; y++; return (*this); }
    const CPoint operator++(int NotUsed) { CPoint temp = (*this); x++; y++; return temp;}
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
    CPoint P1(1, 1);
    CPoint P2 = (++P1)++;

    P1.Print();
    P2.Print();

    return 0;
}