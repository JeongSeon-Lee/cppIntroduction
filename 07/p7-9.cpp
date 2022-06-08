#include <cstdio>
using namespace std;

char *endl = "\n";
char *tab = "\t";

class ostream {
public :
    ostream &operator<<(double val) {
        printf("%lf", val);
        return (*this);
    }
    ostream &operator<<(char *str) {
        printf("%s", str);
        return (*this);
    }
};

class istream {
public :
    istream &operator>>(double &val) {
        scanf("%lf", &val);
        return (*this);
    }
    istream &operator>>(char *str) {
        // scanf("%s", &(*str));
        scanf("%s", str);   // 포인터를 인수로 받았을 때, 그 포인터 변수 안에 주소는 문자열 상수 첫 문자를 가리킴, 그 주소 메모리 안에는 상수이기 때문에 입력받아 바꿀 수 없음.
        return (*this);     // 배열을 인수로 받았을 때, 배열 첫 번째 요소의 주소를 포인터가 가리키고, 배열은 변수이기 때문에 바꿀 수 있음.
    }
};

ostream cout;
istream cin;

int main(void)
{
    double a = 1.1, b = 2.2;
    // char *str1 = "Hi", *str2 = "Hello";
    char str1[] = "Hi", str2[] = "Hello";

    cout << a << ", " << b << endl;
    cout << "a 값 변경 : ";
    cin >> a;
    cout << a << ", " << b << endl;

    cout << str1 << tab << str2 << endl;
    cout << "str1 값 변경 : ";
    cin >> str1;
    cout << str1 << tab << str2 << endl;

    return 0;
}