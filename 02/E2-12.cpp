#include <iostream>
using namespace std;

int main(void)
{
    int **p;
    int i, j;
    p = new int *[4];           // (int *)�� 4���� ���� �迭(������ �迭)�� �Ҵ��ϰ� �� �迭 �ּ� ��ȯ

    for (i = 0; i < 4; i++) {
        p[i] = new int[5];      // int�� 5���� ���� �迭�� �Ҵ��ϰ� �� �迭 �ּ� ��ȯ
    }                           // p[i] == *(p + i)
                                // *(p + i)�� ������
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