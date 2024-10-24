#include<iostream>
using namespace std;
int main()
{
unsigned long long a,b,c,d,m;
cin>>a>>b>>c>>d;
if(a>=2 && b>=2 && c>=2 && d>=2)
{
m=a*b*c*d;
cout<<m%100<<endl;
}
return 0;
}