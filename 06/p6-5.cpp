#include <iostream>
using namespace std;

class CArray {
private :
    int *ary;
    int count;
public :
    CArray(int num) {
        count = num;
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = i;
    }
    CArray(const CArray &arr) {
        count = arr.count;
        ary = new int[count];
        for (int i = 0; i < count; i++)
            ary[i] = arr.ary[i];
    }
    ~CArray() { delete [] ary; }
    CArray &Set(int a, int b) {
        this->ary[a] = b;
        return (*this);
    }
    void Print() {
        for (int i = 0; i < this->count; i++)
            cout << this->ary[i] << " ";
        cout << endl;
    }
};

int main(void)
{
    CArray Ary1(5);
    CArray Ary2(7);
    CArray Ary3(Ary1);
    
    Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

    Ary1.Print();
    Ary2.Print();
    Ary3.Print();

    return 0;
}