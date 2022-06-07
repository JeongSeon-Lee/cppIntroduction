#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class CPoint {
private :
    int x, y;

public :
    CPoint(int a = 0, int b = 0) : x(a), y(b) { }
    void SetXY(int a, int b) { x = a; y = b;}
    void Print() { cout << "(" << x << ", " << y << ")"; }
};

int main(void)
{
    CPoint **ptr;
    int i, j;

    ptr = new CPoint *[2];      // (CPoint *)형 2개를 갖는 객체 배열을 할당하고 그 주소 반환

    for (i = 0; i < 2; i++)
        ptr[i] = new CPoint[3]; // CPoint형 3개를 갖는 객체 배열을 할당하고 그 주소 반환

    srand((unsigned int)time(NULL));
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            ptr[i][j].SetXY(rand() % 10, rand() % 10 );

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            ptr[i][j].Print();
            cout << "\t";
        }
        cout << "\n";
    }

    for (i = 0; i < 2; i++)
        delete [] ptr[i];
    delete [] ptr;

    return 0;
}