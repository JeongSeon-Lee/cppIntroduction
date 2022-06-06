#include <iostream>
using namespace std;

int main(void)
{
    char ary[5][6] = {              // 하나의 문자열을 저장하기 위해서는 1차원 char 배열이 필요하고
        "  *  ",                    // 여러 개의 문자열을 저장하기 위해서는 1차원 char 배열이 여러 개 필요합니다.
        " *** ",                    // 1차원 char 배열을 요소르 갖는 2차원 char 배열
        "*****",                    // 행의 수 5개
        " *** ",                    // 열의 수 널 문자 포함하여 6개
        "  *  "
    };

    for (int i = 0; i < 5; i++)
    {
        cout << ary[i] << endl;    // 각 행은 하나의 1차원 char 배열이며 부분배열명이 각 행의 배열명의 기능을 합니다. 부분배열의 시작 위치 값을 가짐
    }

    return 0;
}