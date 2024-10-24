#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
  {
    int n,b;
  cin>>n;
  int count=0;
 while(n!=0){
    b=n%2;
    if(b==1){
      count=count + 1;
    }
    n=n/2;
 }
  int B=1;
  int sum=1;
 for(int i=1;i<count; i++){
     B = B*2;
     sum=sum+B;
 }
  cout<<sum<<endl;
  
  }
   return 0;
}