#include<stdio.h>
int main(){
    char name[100];
    double fxs,ts,fis;
    gets(name);
    scanf("%lf",&fxs);
    scanf("%lf",&ts);

    //scanf("%s",&name);
    
    fis=(ts*0.15)+fxs;
 printf("TOTAL = R$ %.2lf\n", fis);    
 return 0;
    
}