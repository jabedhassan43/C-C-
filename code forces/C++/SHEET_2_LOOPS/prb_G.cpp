#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      long long m=1;  // fact store oibo ja boro value tai long long  
     for(int i=n;i>=1;i--)
     {
       m=m*i;
     }
      cout<<m<<endl;
    }
    return 0;
}