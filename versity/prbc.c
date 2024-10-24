// #include<stdio.h>
// int main()
// {
//     int t;
//      int n;
//      printf("the value of T = ");
//     scanf("%d",&t);
//     int i;
//     for(i=1; i<=t; i++) {
//             printf("the value of N = ");

//         scanf("%d",&n);
//         int arr[n];

//          int j;
//         for(j=0;j<n;j++)
//        { 
//          scanf("%d",&arr[j]);
         
//        }
//           int m=(n-1)/2;
//           int cp=arr[m];
//           printf("Case %d: %d\n",i,cp);
//     }

    

    
//     return 0;

// }


#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
     int i;
    for (i = 1; i <= T; i++) {
        int N; 
        scanf("%d", &N);
        
        int ages[N];  
        int j;
        for (j = 0; j < N; j++) {
            scanf("%d", &ages[j]);
        }
        
        
        int captain_age = ages[N / 2];
        
        
        printf("Case %d: %d\n", i, captain_age);
    }
    
    return 0;
}
