#include <iostream>
using namespace std;

class CStudent {
private:
    char name[20];
    int number;
    int age;

public:
    CStudent(char str[20] = "noname", int num = 0, int a = 0) {
        strcpy(name, str); number = num; age = a; }
    void SetName(char str[20]) { strcpy(name, str); }
    void SetNumber(int num) { number = num; }
    void SetAge(int a) { age = a; }
    void Print() { cout << "이름 : " << name << endl
                        << "학번 : " << number << endl
                        << "나이 : " << age << endl; }
};

int main(void)
{
    CStudent St1("홍길동", 11111111, 25);
    CStudent St2;

    St1.Print();
    St2.Print();

    St2.SetName("이순신");
    St2.SetNumber(22222222);
    St2.SetAge(30);

    St2.Print();

    return 0;
}