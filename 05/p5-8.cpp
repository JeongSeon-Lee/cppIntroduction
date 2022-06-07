#include <iostream>
using namespace std;

class CShape {
private : 
    int type, len;
    const double PI;    // 여기서 초기화 불가
    static int countR, countC; // static 멤버 변수는 명시적으로 해당 변수를 초기화하는 과정을 거쳐야만 생성됨

public :
    CShape(int t = 1, int l = 0) : type(t), len(l), PI(3.14) {  // 생성자 멤버 초기화 구문으로 const PI 초기화
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
            return (len * len);         // 반환형은 double인데 len이 int여서 그런지 int형으로 잘만 나감. 왜지
            break;
        case 2:
            return (PI * len * len);
            break;
        }
    }
    static int GetRectCount() { return countR; }
    static int GetCircleCount() { return countC; }

};

int CShape::countR = 0, CShape::countC = 0; // static 멤버 변수는 명시적으로 해당 변수를 초기화하는 과정을 거쳐야만 생성됨

int main(void)
{
    CShape S1(1, 5);                // countR : 1
    CShape S2(2, 5);                // countC : 1
    CShape *pRect = new CShape[3];  // count R : 1 + 3 : 4

    cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
    cout << "원 개수     : " << CShape::GetCircleCount() << endl;
    cout << "S1의 면적   : " << S1.GetArea() << endl;

    delete [] pRect;

    cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
    cout << "원 개수     : " << CShape::GetCircleCount() << endl;
    cout << "S2의 면적   : " << S2.GetArea() << endl;

    return 0;
}