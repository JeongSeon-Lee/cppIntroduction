#include <iostream>
using namespace std;

class CPointX {
protected :
    int x;

public :
    CPointX(int a = 0) : x(a) { cout << "CPointX 생성자" << endl; } // 반드시 디폴트 생성자 존재해야 하면 항상 디폴트 생성자가 동작하게 된다.
    ~CPointX() { cout << "CPointX 소멸자" << endl; }
    void Print() { cout << "CPointX" << endl; }
};

class CPointXY : virtual public CPointX {
protected : 
    int y;

public :
    CPointXY(int a, int b) : CPointX(a), y(b) { cout << "CPointXY 생성자" << endl; }
    ~CPointXY() { cout << "CPointXY 소멸자" << endl; }
    void Print() { cout << "CPointXY" << endl; }
};

class CPointXZ : virtual public CPointX {
protected :
    int z;

public :
    CPointXZ(int a, int c) : CPointX(a), z(c) { cout << "CPointXZ 생성자" << endl; }
    ~CPointXZ() { cout << "CPointXZ 소멸자" << endl; }
    void Print() { cout << "CPointXZ" << endl; }
};

class CPointXYZ : public CPointXY, public CPointXZ {
protected :
    int xyz;

public :
    CPointXYZ(int a, int b, int c) : CPointXY(a, b), CPointXZ(a, c), xyz(0)
        { cout << "CPointXYZ 생성자" << endl; }
    ~CPointXYZ() { cout << "CPointXYZ 소멸자" << endl; }
    void Print() {
        CPointX::Print();
        CPointXY::Print();
        CPointXZ::Print();
        cout << "CPointXYZ" << endl;
    }
};

int main(void)
{
    CPointXYZ Pxyz(1, 2, 3);
    Pxyz.Print();

    return 0;
}