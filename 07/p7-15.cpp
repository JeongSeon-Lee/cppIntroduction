#include <iostream>
#include <cstring>
using namespace std;

class CString {
private :
    int Len;
    char *Str;

public :
    CString(const char *str = "Unknown") {
        Len = strlen(str);
        Str = new char[Len + 1];
        strcpy(Str, str);
    }
    CString(const CString &str) {
        Len = str.Len;
        Str = new char[Len + 1];
        strcpy(Str, str.Str);
    }
    ~CString() { delete [] Str; }

    CString &operator=(const CString &str) {    // 대입 연산자 오버로딩은 멤버함수로만 가능
        delete [] Str;
        Len = str.Len;
        Str = new char[Len];
        strcpy(Str, str.Str);
        return (*this);
    }

    friend CString operator+(const CString &s1, const CString &s2);
    friend bool operator==(const CString &s1, const CString &s2);
    friend ostream &operator<<(ostream &out, const CString &str);
    friend istream &operator>>(istream &in, CString &str);
};

CString operator+(const CString &s1, const CString &s2)
{
    int len = s1.Len + s2.Len;
    char *str = new char[len + 1];

    strcpy(str, s1.Str);
    strcat(str, s2.Str);

    CString s(str);
    delete [] str;

    return s;
}

CString &operator+=(CString &s1, const CString &s2)
{
    return (s1 = s1 + s2);
}

bool operator==(const CString &s1, const CString &s2)
{
    if ((s1.Len == s2.Len) && (strcmp(s1.Str, s2.Str) == 0))
        return true;
    else
        return false;
}

ostream &operator<<(ostream &out, const CString &str)
{
/*     for (int i = 0; i < str.Len; i++)
        out << str.Str[i]; */
    out << str.Str;
    return out;
}

istream &operator>>(istream &in, CString &str)
{
    char *stro = new char[80];
    // char stro[80];
    in >> stro;
    str = CString(stro);
    delete [] stro;
    return in;
}

int main(void)
{
    CString str1 = "Good ";
    CString str2 = "morning";
    CString str3;
    str3 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    str1 += str2;
    if (str1 == str3)
        cout << "equal!" << endl;
    
    CString str4;
    cout << "문자열 입력 : ";
    cin >> str4;
    cout << "입력한 문자열 : " << str4 << endl;

    return 0;
}