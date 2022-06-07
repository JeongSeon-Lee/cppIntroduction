#include <iostream>
using namespace std;

class CPoint {
private:
    int x;
    int y;

public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) { };
    void input() { 
        cout << "x의 값 : ";    cin >> x;
        cout << "y의 값 : ";    cin >> y;
    }
    void print() { cout << "(" << x << "," << y <<")"; }
};

int main(void)
{
    CPoint ary[3][2];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            ary[i][j].input();
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            ary[i][j].print();
            cout << '\t';
        }
        cout << endl;
    }
    
    return 0;    
}