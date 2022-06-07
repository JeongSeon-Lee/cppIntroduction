#include <iostream>
using namespace std;

class CPointArray; //전방선언

class CPoint {
private:
    int x, y;
public:
    void SetSum(CPointArray &Pa);
    void Print() { cout << "(" << x << ", " << y << ")" << endl; }

    friend class CPointArray; //서로 friend 선언해주어야한다(private 멤버 접근 위해)
};

class CPointArray {
private:
    CPoint Ary[3];
public:
    CPointArray() {
        for (int i = 0; i < 3; i++) {
            Ary[i].x = i + 1;
            Ary[i].y = i + 1;
        }
    }
    void SetSum(int index) { Ary[index].SetSum(*this); }
    void Print() {
        for (int i = 0; i < 3; i++)
            Ary[i].Print();
    }

    friend class CPoint; //추가해줘야하는 문장
};

void CPoint::SetSum(CPointArray &Pa)
{
    x = (Pa.Ary[0].x + Pa.Ary[1].x + Pa.Ary[2].x);
    y = (Pa.Ary[0].y + Pa.Ary[1].y + Pa.Ary[2].y);
}

int main(void)
{
    CPointArray PAry;

    PAry.SetSum(0);
    PAry.Print();

    return 0;
}