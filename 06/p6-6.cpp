#include <iostream>
using namespace std;

class CArray {
private :
    int *ary;
    int count;
public :
    CArray(int num) : count(num) {
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = i;
    }
    CArray(const CArray &arr) : count(arr.count) {
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = arr.ary[i];
    }
    ~CArray() { delete [] ary; }
    CArray &Set(int a, int b) {
        ary[a] = b;
        return *this;
    }
    void Print() {
        for (int i = 0; i < count; i++)
            cout << ary[i] << " ";
        cout << endl;
    }
    
    friend CArray Sum(CArray A1, CArray A2);
};

CArray Sum(CArray A1, CArray A2)
{
    int num;

    if (A1.count > A2.count) num = A1.count;
    else num = A2.count;

    CArray A3(num);

    for (int i = 0; i < 5; i++)
        A3.ary[i] = A1.ary[i] + A2.ary[i];

    return A3;
}

int main(void)
{
    CArray Ary1(5);
    CArray Ary2(7);
    
    Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

    CArray Ary3 = Sum(Ary1, Ary2);

    Ary1.Print();
    Ary2.Print();
    Ary3.Print();

    return 0;
}