#include <iostream>
using namespace std;

class CShape {
protected :
    int x, y;

public :
    CShape(int a, int b) : x(a), y(b) { }
    virtual double GetArea() = 0;   // 해당 클래스의 객체는 필요없고 다른 클래스의 base 클래스로서의 역할만 하기 때문에 추상 클래스로 만듦
    virtual void Print() = 0;

    friend ostream &operator<<(ostream &out, CShape &Spe);
};

ostream &operator<<(ostream &out, CShape &Spe)
{
    // out << Spe.Print();   Print() 사용하니까 안 됨.
    Spe.Print();
    return out;
}

class CCircle : public CShape {
private :
    double Radius;

public :
    CCircle(int a, int b, double r) : CShape(a, b), Radius(r) { }
    double GetArea() { return (3.14 * Radius * Radius); }   // 함수 재정의 안 하면 CCircle도 추상 클래스가 됨
    void Print() { cout << GetArea() << endl; }
};

class CRect : public CShape {
private :
    int Garo, Sero;

public :
    CRect(int a, int b, int g, int s) : CShape(a, b), Garo(g), Sero(s) { };
    double GetArea() { return (Garo * Sero); }
    void Print() { cout << GetArea() << endl; }
};

int main(void)
{
    CCircle Cir(1, 1, 1);
    CRect Rect(2, 2, 2, 2);
    CShape *pSpe;   // 추상 클래스의 객체는 못 만들지만 객체 포인터는 가능

    pSpe = &Cir;    // 타입이 다른 포인터에 대입 가능
    cout << *pSpe;

    pSpe = &Rect;   // 타입이 다른 포인터에 대입 가능
    cout << *pSpe;

    return 0;
}