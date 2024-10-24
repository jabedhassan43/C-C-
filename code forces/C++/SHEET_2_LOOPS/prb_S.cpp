#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int x,y;
   cin>>x>>y;
   unsigned long long sum=0;
   if(x>y){
      int temp = x;
      x=y;
      y=temp;
   }
   for(int i=x+1; i<y; i++){
    if(i%2==1){
          sum=sum+i;
    }
   }
      cout<<sum<<endl;
   }
   return 0;
}





// #include<iostream>
// using namespace std;
// int main(){
//   int n,a,b;
//   cin>>n>>a>>b;
//   int total_sum=0;
//   for(int i=1;i<=n;i++){
//     int sum=0;
//     int temp=i;   
//     while(temp>0){
//       int digit=temp%10;
//       sum+=digit;
//       temp/=10;
//     }
//      if(sum>=a&&sum<=b){
//       total_sum+=i;
//      }
//   }
//   cout<<total_sum<<endl;
// }

