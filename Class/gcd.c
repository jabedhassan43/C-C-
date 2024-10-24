#include <stdio.h>

int main()
{
    int a = 57, b = 98;
    int result;
    while (a > 0 && b > 0) {
        if( a > b ){
            a = a%b;
        }
        else {
            b = b%a;
        }
    }
    if (a == 0) {
        result = b;
    }
    else {
        result = a;
    }

    printf("%d\n", result);
    return 0;
}