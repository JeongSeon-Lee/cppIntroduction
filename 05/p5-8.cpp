#include <iostream>
using namespace std;

class CShape {
private : 
    int type, len;
    const double PI;    // ���⼭ �ʱ�ȭ �Ұ�
    static int countR, countC; // static ��� ������ ��������� �ش� ������ �ʱ�ȭ�ϴ� ������ ���ľ߸� ������

public :
    CShape(int t = 1, int l = 0) : type(t), len(l), PI(3.14) {  // ������ ��� �ʱ�ȭ �������� const PI �ʱ�ȭ
        if (type == 1) countR++;
        else if (type == 2) countC++;
    }
    ~CShape() {
        if (type == 1) countR--;
        else if (type == 2) countC--;
    }
    double GetArea() {
        switch (type)
        {
        case 1:
            return (len * len);         // ��ȯ���� double�ε� len�� int���� �׷��� int������ �߸� ����. ����
            break;
        case 2:
            return (PI * len * len);
            break;
        }
    }
    static int GetRectCount() { return countR; }
    static int GetCircleCount() { return countC; }

};

int CShape::countR = 0, CShape::countC = 0; // static ��� ������ ��������� �ش� ������ �ʱ�ȭ�ϴ� ������ ���ľ߸� ������

int main(void)
{
    CShape S1(1, 5);                // countR : 1
    CShape S2(2, 5);                // countC : 1
    CShape *pRect = new CShape[3];  // count R : 1 + 3 : 4

    cout << "�簢�� ���� : " << CShape::GetRectCount() << endl;
    cout << "�� ����     : " << CShape::GetCircleCount() << endl;
    cout << "S1�� ����   : " << S1.GetArea() << endl;

    delete [] pRect;

    cout << "�簢�� ���� : " << CShape::GetRectCount() << endl;
    cout << "�� ����     : " << CShape::GetCircleCount() << endl;
    cout << "S2�� ����   : " << S2.GetArea() << endl;

    return 0;
}