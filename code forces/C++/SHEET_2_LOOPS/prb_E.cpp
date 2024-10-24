#include<iostream>
using namespace std;
int main()
{
   int n,m,x;
   cin>>n;
   m=0;
  for (int i=1; i<=n; i++){
    cin>>x;
    if (m<x){
        m=x;
    }
   }
   cout<<m<<endl;
   return 0;
}