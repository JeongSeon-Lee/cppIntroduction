#include <iostream>
#include "C:\Users\이정선\!코딩\CppIntroduction\02\P2-3\ns.h"
using namespace std;
using namespace MyNS;

int MyMax(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int MyMin(int a, int b)
{
    if (a > b) return b;
    else return a;
}