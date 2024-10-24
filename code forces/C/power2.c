#include<stdio.h>
int main()
{
    int x,y;
    printf ("Enter value of x and y :");
//printf ("Enter value of y :");
    scanf("%d%d",&x,&y);

    double result = pow(x,y);
    printf("%.2lf",result);
    return 0;
}
