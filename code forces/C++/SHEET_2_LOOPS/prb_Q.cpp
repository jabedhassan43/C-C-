#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
   long long n;
   int digit;
   cin>>n;
   if(n==0){
    cout<<0<<endl;
    continue;
   }
   while(n>0){
    digit = n%10;
   cout<<digit<<" ";
    n=n/10;
   }
   cout<<endl;
   }
   return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   for(int i=1;i<=t;i++){
//     long long n;
//     cin>>n;
//     if (n == 0) {
//             cout << 0 << endl;
//             continue;
//         }
//     while(n>0){
//       int digit=n%10;
//       cout<<digit<<" ";
//       n/=10;
//     }
//     cout<<endl;
//   }
// }