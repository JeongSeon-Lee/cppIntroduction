#include <iostream>
using namespace std;

template <typename T>
class CPoint {
private :
    T x, y;

public :
    CPoint(T a, T b) : x(a), y(b) { };
    template <typename T1>
    friend CPoint<T1> operator+(CPoint<T1> &Po1, CPoint<T1> &Po2);
    template <typename T2>
    friend ostream &operator<<(ostream &out, CPoint<T2> &Po);
};

template <typename T1>
CPoint<T1> operator+(CPoint<T1> &Po1, CPoint<T1> &Po2)
{ 
    return CPoint<T1>(Po1.x + Po2.x, Po1.y + Po2.y);
}

template <typename T2>
ostream &operator<<(ostream &out, CPoint<T2> &Po)
{
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
}

int main(void)
{
    CPoint<int> a(1, 2);
    CPoint<int> b(3, 4);
    CPoint<int> c = a + b;
    cout << a << " + " << b << " = " << c << endl;

    CPoint<double> d(1.2, 3.4);
    CPoint<double> e(5.6, 7.8);
    CPoint<double> f = d + e;
    cout << d << " + " << e << " = " << f << endl;

    return 0;
}