#include<stdio.h>
int main()
{
    float A; // A= 1hour money
    int B;  // 1month hour
    int C;  // employ number 
    
    scanf("%d",&C);
    scanf("%d",&B);
    scanf("%f",&A);
    
    float ans;
    ans=A*B;
    printf("NUMBER = %d\n",C);
    printf("SALARY = U$ %.2f\n",ans);
    return 0;
}