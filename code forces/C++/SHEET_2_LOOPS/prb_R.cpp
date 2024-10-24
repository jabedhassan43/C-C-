#include<iostream>
using namespace std;

int main()
{
   while(true){
    int m,n;
   cin>>n>>m;
   if(m>0 && n>0 ){
    if(n>m){
        int temp=n;
            n=m;
            m=temp;
      }
        int sum=0;
       for(int i=n; i<=m; i++){
          sum+=i;
          cout <<i<<" ";
       }
       cout<<"sum ="<<sum<<endl;
    }
    else {
        break;
    }
   }
   return 0;
}