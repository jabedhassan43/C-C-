#include<iostream>
using namespace std;
int main()
{
   int n,m,e,o,p,ne;
   e=0;
   o=0;
   p=0;
   ne=0;
   cin>>n;

   for(int i=1; i<=n;i++){
    cin>>m;
    if(m%2==0){
        e=e+1; 
    }
    if(m%2!=0){
       o=o+1;
    }
    if(m>0){
      p=p+1;
    }
    if(m<0){
     ne=ne+1;
    }
   }
cout<<"Even: "<<e<<endl;
cout<<"Odd: "<<o<<endl;
cout<<"Positive: "<<p<<endl;
cout<<"Negative: "<<ne<<endl;
   return 0;
}
