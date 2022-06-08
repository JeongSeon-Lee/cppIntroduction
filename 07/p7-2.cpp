#include <iostream>
using namespace std;

class CTime {
private :
    int Hour, Minute, Second;

public :
    CTime(int H, int M, int S) : Hour(H), Minute(M), Second(S) { }
    CTime operator+(const CTime &T) { 
        int h = Hour + T.Hour, m = Minute + T.Minute, s = Second + T.Second;
        if (s >= 60) {
            s -= 60;
            m++;
        }
        if (m >= 60) {
            m -= 60;
            h++;
        }
        return CTime(h, m, s); }
    void Print() { cout << Hour << "½Ã " << Minute << "ºÐ " << Second << "ÃÊ" << endl; }
};

int main(void)
{
    CTime time1(4, 50, 40);
    CTime time2(3, 40, 30);
    CTime time3 = time1 + time2;

    time1.Print();
    time2.Print();
    time3.Print();

    return 0;
}