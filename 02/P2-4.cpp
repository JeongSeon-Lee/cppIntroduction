#include <iostream>
using namespace std;
 
#define PI 3.14
 
int GetArea(int col, int row)
{
    return col*row;
}
 
double GetArea(int radius)
{
    return radius*radius*PI;
}
 
int main(void)
{
    int sel;
    cout << "[1].���簢�� ����\t[2].���ǳ���:  ";
    cin >> sel;
    switch (sel)
    {
    case 1:
        int col, row;
        cout << "���� ���� �Է�:";
        cin >> row >> col;
        cout << "���簢���� ����:" << GetArea(col, row) << endl;
        break;
    case 2:
        int radius;
        cout << "������ �Է�:";
        cin >> radius;
        cout << "���� ����:" << GetArea(radius) << endl;
        break;
    }
    return 0;
}