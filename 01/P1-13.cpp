#include <stdio.h>

struct Point {
    int x, y;
};

struct Point GetSum(const struct Point *pAry, int count)
{
    int i;
    struct Point Po = { 0, 0 };

    for (int i = 0; i < count; i++) {       // = : �迭 �Ҵ� ���� ����� ��
        Po.x += pAry[i].x;      // -> : �̹� �迭 ��� ǥ�������� ���� ���� �����ڸ� ����ϰ� �ִµ� ���� ��� ���� �����ڸ� ��������ν� ���� ���� �����ڸ� �� �� ����ϴ� ���� ��
        Po.y +=pAry[i].y;
    }

    return Po;
}

int main(void)
{
    struct Point Ary[3] = { { 1, 1 }, { 2, 2 }, { 3, 3 } };     // 3���� �迭 ��Ҹ� ���� �� ����
    struct Point PSum = GetSum(Ary, 3);
    
    printf("Sum : (%d, %d)\n", PSum.x, PSum.y);

    return 0;
}