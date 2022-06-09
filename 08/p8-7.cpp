#include <iostream>
using namespace std;

class CPoint {
private :
    int x, y;
    CPoint(int a, int b) : x(a), y(b) { }
    static CPoint *Point;

public :
    static CPoint GetPoint(int a, int b) {
        if (Point == NULL) {
            Point = new CPoint(a, b);
            return (*Point);
        }
        else {
            delete Point;
            Point = new CPoint(a, b);
            return (*Point);
        }

    }
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint *CPoint::Point = NULL;   // CPoint::는 초기화 문법

int main(void)
{
    CPoint P1 = CPoint::GetPoint(1, 2);
    CPoint P2 = CPoint::GetPoint(3, 4);

    P1.Print();
    P2.Print();

    return 0;
}