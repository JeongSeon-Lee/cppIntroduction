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
    CArray &operator=(const CArray &Ary) { 
        count = Ary.count;
        delete [] ary;
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = Ary.ary[i];
        return (*this);
    }

    friend ostream &operator<<(ostream &out, CArray &Ary);
};

ostream &operator<<(ostream &out, CArray &Ary)
{
    for (int i = 0; i < Ary.count; i++)
        out << Ary.ary[i] << "\t";
    return out;
}

int main(void)
{
    srand((unsigned) time(NULL));

    CArray Ary1(3);
    CArray Ary2(5);

    cout << Ary1 << endl;
    cout << Ary2 << endl;

    Ary1 = Ary2;

    cout << Ary1 << endl;
    cout << Ary2 << endl;

    return 0;
}