#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
        if(n>=1){
        cout<<0<<" ";
     }

     if(n>=2){
        cout<<1<<" ";
     }
int a=0;
int b=1;
   for(int i=3; i<=n; i++)
   {
       int x=a+b;
       cout<<x<<" ";
       a=b;
       b=x;

   }
   return 0;
}

