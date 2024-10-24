#include<iostream>
using namespace std;

int main()
{
   int n,a,b;
   cin>>n>>a>>b;
   int sum=0;
    for(int i=1; i<=n; i++) {
      int sum1= (i/10) +( i%10);
      for(int j=a; j<=b; j++){
        if(sum1==j){
            sum=sum+i;
        }
      }
   }
   cout<<sum<<endl;
   return 0;
}

