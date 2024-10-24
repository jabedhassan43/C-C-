#include<iostream>
using namespace std;

int main()
{
   int n,m;
   cin >>n>>m;
   int max=0;
   for(int i=1,j=1; i<=n,j<=m; i++,j++){
      if(n%i==0 && m%j==0){
       if(max<i){
        max=i;
       }
      }
      
   }
   cout<<max<<endl;
   return 0;
}