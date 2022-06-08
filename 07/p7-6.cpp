#include <iostream>
using namespace std;

class CArray {
private :
    int Ary[5];

public :
    CArray() {
        for (int i = 0; i < 5; i++)
            Ary[i] = i;
    }
    void Print() {
        for (int i = 0; i < 5; i++) {
            cout << Ary[i] << " ";
        }
        cout << endl;
    }

    friend CArray &operator+(CArray &ary);
    friend CArray &operator-(CArray &ary);
};

CArray &operator+(CArray &ary) { 
    int temp[5];
    for (int i = 0; i < 5; i++)
        temp[i] = ary.Ary[i];
    for (int i = 0; i < 4; i++)
        ary.Ary[i + 1] = temp[i];   // 오른쪽으로 1칸씩 밀어 넣고
    ary.Ary[0] = temp[4];           // 첫번째 원소에 기존의 마지막 원소 값 넣음
    return ary;
}
CArray &operator-(CArray &ary) { 
    int temp[5];
    for (int i = 0; i < 5; i++)
        temp[i] = ary.Ary[i];
    for (int i = 0; i < 4; i++)
        ary.Ary[i] = temp[i + 1];   // 왼쪽으로 1칸씩 밀어 넣고
    ary.Ary[4] = temp[0];           // 마지막 원소에 기존의 첫번째 원소 값 넣음
    return ary;
}

int main(void)
{
    CArray ary1;
    ary1.Print();

    CArray ary2 = +ary1;
    ary1.Print();
    ary2.Print();

    -(-ary1);
    ary1.Print();

    return 0;
}