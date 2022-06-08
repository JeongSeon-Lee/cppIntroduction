#include <iostream>
using namespace std;

class CComplex {
private :
    double a, b;

public :
    CComplex(int x = 0, int y = 0) : a(x), b(y) { }

    friend ostream &operator<<(ostream &out, CComplex &Po);
    friend istream &operator>>(istream &in, CComplex &Po);
};

ostream &operator<<(ostream &out, CComplex &Po) // 책에선 const CComplex &Po인데 const쓰면 안됨;
{
    out << Po.a << " + " << Po.b << "i" << endl; 
    return out;
}
istream &operator>>(istream &in, CComplex &Po)
{
    in >> Po.a >> Po.b;
    return in;
}

int main(void)
{
    CComplex C1;

    cin >> C1;
    cout << C1;

    return 0;
}