#include <iostream>
#include <cstring>
using namespace std;

class CDate {
protected :
    int Year, Month, Day;

public : 
    CDate(int y, int mo, int d) : Year(y), Month(mo), Day(d) { }
    void Print() { cout << Year << "년 " << Month << "월 " << Day << "일" << endl; }};

class CTime {
protected : 
    int Hour, Minute, Second;

public : 
    CTime(int h, int mi, int s) : Hour(h), Minute(mi), Second(s) { }
    void Print() { cout << Hour << "시 " << Minute << "분 " << Second << "초" << endl; }
};

class CDateTime : public CDate, public CTime {
private :
    char ToDo[80];

public :
    CDateTime(int y, int mo, int d, int h, int mi, int s, char *str) : CDate(y, mo, d), CTime(h, mi, s) {
        strcpy(ToDo, str);
    }
    void Print() {
        CDate::Print();
        CTime::Print();
        cout << "할 일 : " << ToDo << endl;
    }
};

int main(void)
{
    CDateTime To(2022, 6, 9, 3, 4, 10, "study");
    To.Print();

    return 0;
}