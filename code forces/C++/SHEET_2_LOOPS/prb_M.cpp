#include<iostream>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int found=0;
   for(int i=n;i<=m;i++){
      int temp=i;
      int digit;
      int check=0;
    while(temp>0){
      digit= temp % 10;
      if(digit!=4 && digit!=7){
         check=1;
         break;
      }
      temp=temp/10;
    }
       if(check==0){
         cout<<i<<" ";
         found=1;
       }
   }
  
  if(found==0){
   cout<<"-1";
  }
   return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   int found=0;
//   for(int i=a;i<=b;i++){
//     int temp=i;
//     int check=0;
//     while(temp>0){
//       int digit=temp%10;
//       if(digit!=4&&digit!=7){
//           check=1;
//           break;
//       }
//       temp=temp/10;
//     }
//     if(check==0){
//       cout<<i<<" ";
//       found=1;
//     }
//   }
//   if(found==0){
//     cout<<-1;
//   }
// }