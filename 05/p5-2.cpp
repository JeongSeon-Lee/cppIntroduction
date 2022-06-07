#include <iostream>
using namespace std;

class CPoint {
private :
    int x, y;

public :
    CPoint (int a = 0, int b = 0) : x(a), y(b) { }
    void SetXY(int a, int b) { x = a; y = b; }
    int GetSumX(CPoint *ary, int count) {
        int res = 0;
        for (int i = 0; i < count; i++)
            res += ary[i].x;
        return res;
    }
    int GetSumY(CPoint *ary, int count) {
        int res = 0;
        for (int i = 0; i < count; i++)
            res += ary[i].y;
        return res;
    }
    void Print() { cout << "(" << x << ", " << y << ")"; }
};

int main(void)
{
    int i;
    CPoint ary[5] = { CPoint(1, 2), CPoint(3, 4), CPoint(5, 6) };
    CPoint sum;

    sum.SetXY(sum.GetSumX(ary, 5), sum.GetSumY(ary, 5));
    sum.Print();

    return 0;
}