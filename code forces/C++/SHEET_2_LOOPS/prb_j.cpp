#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >>n;
   for(int i=2; i<=n; i++){
      int ch=0;
    for(int j=2; j<i; j++) {
      if(i%j==0){
        ch=1;
          break;
      }
        
    }
     if(ch==0){
       cout<<i<<" ";
     }
   }
   return 0;
}