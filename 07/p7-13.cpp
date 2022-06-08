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
    int &operator[](int index) {
        if (index == 0) return this->ary[0];
        else if (index == 1) return this->ary[1];
        else if (index == 2) return this->ary[2];
        else if (index == 3) return this->ary[3];
        else if (index == 4) return this->ary[4];
        else cout << "범위 벗어남" << endl;
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

    CArray Ary1(5);
    cout << Ary1 << endl;

    Ary1[0] = 5;
    cout << Ary1 << endl;

    Ary1[1] = 7;
    cout << Ary1 << endl;

    Ary1[5] = 9;
    cout << Ary1 << endl;

    return 0;
}