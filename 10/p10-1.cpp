#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b) {     // swap 소문자로 하면 빌드 안 됨
    T temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int ai = 1, bi = 2;
    double ad = 1.1, bd = 2.2;
    char ac = '1', bc = '2';

    cout << ai << ", " << bi << endl;
    cout << ad << ", " << bd << endl;
    cout << ac << ", " << bc << endl;

    Swap(ai, bi);
    Swap(ad, bd);
    Swap(ac, bc);

    cout << ai << ", " << bi << endl;
    cout << ad << ", " << bd << endl;
    cout << ac << ", " << bc << endl;

    return 0;
}