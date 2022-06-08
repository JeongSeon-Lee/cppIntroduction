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
        scanf("%s", str);
        return (*this);
    }
};

ostream cout;
istream cin;

int main(void)
{
    double a = 1.1, b = 2.2;
    char *str1 = "Hi", *str2 = "Hello";

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