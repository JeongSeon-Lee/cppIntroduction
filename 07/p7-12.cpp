#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class CArray {
private :
    int count;
    int *ary;

public :
    CArray(int num) : count(num) {
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = rand() % 10;
    }
    ~CArray() { delete [] ary; }
    CArray(const CArray &Ary) {
        count = Ary.count;
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = Ary.ary[i];
    }
    CArray &operator=(const CArray &Ary) { 
        count = Ary.count;
        delete [] ary;
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = Ary.ary[i];
        return (*this);
    }

    friend ostream &operator<<(ostream &out, CArray &Ary);
    friend CArray operator+(const CArray &A1, const CArray &A2);
};

ostream &operator<<(ostream &out, CArray &Ary)
{
    for (int i = 0; i < Ary.count; i++)
        out << Ary.ary[i] << "\t";
    return out;
}

CArray operator+(const CArray &A1, const CArray &A2)
{
    CArray A(A1.count + A2.count);
    int idx = 0;

    for (int i = 0; i < A1.count; i++)
        A.ary[idx++] = A1.ary[i];
    for (int i = 0; i < A2.count; i++)
        A.ary[idx++] = A2.ary[i];

    return A;   // 지역변수를 참조 반환하면 안됨, 지역 객체값 반환, 임시 객체 복사 생성(복사 생성자 필요)
}

int main(void)
{
    srand((unsigned) time(NULL));

    CArray Ary1(3);
    CArray Ary2(5);
    CArray Ary3(7);

    cout << Ary1 << endl;
    cout << Ary2 << endl;
    cout << Ary3 << endl;

    Ary3 = Ary1 + Ary2;     // 임시 객체와 Ary3 객체는 무관, 대입과 동시에 임시 객체 소멸

    cout << Ary1 << endl;
    cout << Ary2 << endl;
    cout << Ary3 << endl;

    return 0;
}