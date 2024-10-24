#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
     int a=0,b=1;
   for(int i=1;i<=n;i++){
       
        if(i==1){
           printf("%d ",a);
        }
        if(i==2){
           printf("%d ",b);
        }
        else{
         int temp = a + b;
            a = b;
            b = temp;
       
        printf("%d ",temp);

        }
        
    }
     return 0;
}
// #include<stdio.h>


// int main() {
//     int n;
//     scanf("%d", &n);

//     int a = 0, b = 1, temp;

//     for (int i = 1; i <= n; i++) {
//         if (i == 1) {
//             printf("%d ", a); // Print the first term (0)
//         } else if (i == 2) {
//             printf("%d ", b); // Print the second term (1)
//         } else {
//             temp = a + b;
//             a = b;
//             b = temp;
//             printf("%d ", temp); // Print the next Fibonacci number
//         }
//     }

//     return 0;
// }
