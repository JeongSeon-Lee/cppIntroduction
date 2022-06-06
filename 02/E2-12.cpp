#include <iostream>
using namespace std;

int main(void)
{
    int **p;
    int i, j;
    p = new int *[4];           // (int *)형 4개를 갖는 배열(포인터 배열)을 할당하고 그 배열 주소 반환

    for (i = 0; i < 4; i++) {
        p[i] = new int[5];      // int형 5개를 갖는 배열을 할당하고 그 배열 주소 반환
    }                           // p[i] == *(p + i)
                                // *(p + i)는 포인터
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            p[i][j] = i + j;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            cout << p[i][j] << "\t";
        }
        cout << "\n";
    }

    for (i = 0; i < 4; i++)
        delete [] p[i];
    delete [] p;

    return 0;
}