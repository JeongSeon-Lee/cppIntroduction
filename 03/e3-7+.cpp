#include <iostream>
using namespace std;

void swap(int x, int y)
{
    cout << &x << endl;
    cout << &y << endl;
}

int main(void)
{
    int x = 3, y = 5;
    cout << "main" << endl;
    cout << &x << endl;
    cout << &y << endl;

    cout << endl << "swap" << endl;
    swap(3, 5);
    
    return 0;
}