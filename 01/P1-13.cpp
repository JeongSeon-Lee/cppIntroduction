#include <stdio.h>

struct Point {
    int x, y;
};

struct Point GetSum(const struct Point *pAry, int count)
{
    int i;
    struct Point Po = { 0, 0 };

    for (int i = 0; i < count; i++) {       // = : 배열 할당 범위 벗어나게 됨
        Po.x += pAry[i].x;      // -> : 이미 배열 요소 표현식으로 간접 참조 연산자를 사용하고 있는데 간접 멤버 참조 연산자를 사용함으로써 감접 참조 연산자를 두 번 사용하는 꼴이 됨
        Po.y +=pAry[i].y;
    }

    return Po;
}

int main(void)
{
    struct Point Ary[3] = { { 1, 1 }, { 2, 2 }, { 3, 3 } };     // 3개의 배열 요소를 가질 수 있음
    struct Point PSum = GetSum(Ary, 3);
    
    printf("Sum : (%d, %d)\n", PSum.x, PSum.y);

    return 0;
}