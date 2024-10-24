#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >>n;
   // for 1 
   if(n==1){
      cout<<"NO"<<endl;
   }
   // to check prime or not
    int check=0;
   for(int i=2; i<n; i++){
    if(n%i==0){
         cout<<"NO"<<endl;
         check=1;
         break;
    }
   }
   if(check==0){
    cout<<"YES"<<endl;
    }
   
    return 0;
}