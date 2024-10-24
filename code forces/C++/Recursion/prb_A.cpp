#include<iostream>
using namespace std;
void fact (int n){
    if(n==0){
        return ;
    }
   // cout<<"I love Recursion"<<endl;
    fact(n-1);
    cout<<n<<endl;
   return;
}
int main()
{
    int n;
    cin>>n;
    fact (n);
    return 0;
}