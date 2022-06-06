#include <iostream>
using namespace std;

int main(void)
{
    char ary[5][6] = { 
        "  *  ",
        " *** ",
        "*****",
        " *** ",
        "  *  "
    };

    for (int i = 0; i < 5; i++)
    {
        cout << ary[i] << endl;
    }

    return 0;
}