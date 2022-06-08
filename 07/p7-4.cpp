#include <iostream>
using namespace std;

class CComplex {
private :
    double a, b;

public :
    CComplex(int x, int y) : a(x), b(y) { }
    CComplex operator+(const CComplex &C) { return CComplex(a + C.a, b + C.b); }
    CComplex operator-(const CComplex &C) { return CComplex(a - C.a, b - C.b); }
    CComplex operator-(int c) { return CComplex(a - c, b); }
    void Print() { cout << a << " + " << b << "i" << endl; }

    friend CComplex operator-(int c, CComplex &C);
};

CComplex operator-(int c, CComplex &C)
{
    return CComplex(c - C.a, C.b);
}

int main(void)
{
    CComplex C1(1, 2), C2(3, 4);
    double a = 2;

    CComplex C3 = C1 + C2;
    CComplex C4 = C1 - C2;
    CComplex C5 = C1 - a;
    CComplex C6 = a - C1;

    C3.Print();
    C4.Print();
    C5.Print();
    C6.Print();

    return 0;
}