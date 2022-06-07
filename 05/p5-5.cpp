#include <iostream>
using namespace std;

class CArray {
private :
    int ary[5];

public : 
    // CArray &GetSum(int a) { return this[a]; }
    int &GetElem(int a) { return ary[a]; }  // this[a]로 반환하면 안됨, this 포인터는 객체의 주소를 받고 객체 그대로 반환하는데 main함수에서 해당 객체는 배열이 아님
    CArray &Increase(int a) { ary[a] += 1; return (*this); }
};

int main(void)
{
    int i;
    CArray Ary;

    for (i = 0; i < 5; i++)
        Ary.GetElem(i) = i;
    
    Ary.Increase(0).Increase(1).Increase(2).Increase(3).Increase(4);

    for (i = 0; i < 5; i++)
        cout << "Ary[" << i << "] " << Ary.GetElem(i) << endl;

    return 0;
}