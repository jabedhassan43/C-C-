#include <stdio.h>

double func(double a, double b);

int main()
{
    double result = func(10.5, 12.5);
    printf("%lf\n", result);
    return 0;
}

double func(double a, double b)
{
    double k = a*b;
    return k;
}