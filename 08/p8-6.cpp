#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A 생성자" << endl; }
    ~A() { cout << "A 소멸자" << endl; }
};

class X :public virtual A {
public:
    X() { cout << "X 생성자" << endl; }
    ~X() { cout << "X 소멸자" << endl; }
};

class Y :public virtual A {
public:
    Y() { cout << "Y 생성자" << endl; }

    ~Y() { cout << "Y 소멸자" << endl; }
};

class Z :public virtual A {
public:
    Z() { cout << "Z 생성자" << endl; }
    ~Z() { cout << "Z 소멸자" << endl; }
};

class B :public /* virtual */ X, public /* virtual */ Y, public /* virtual */ Z {
public:
    B() { cout << "B 생성자" << endl; }
    ~B() { cout << "B 소멸자" << endl; }
};

int main(void)
{
    B(); //virtual을 적절히 사용하면 A 생성자가 한번만 호출된다
    return 0;
}