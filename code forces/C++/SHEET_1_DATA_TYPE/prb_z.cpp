#include<iostream>
using namespace std;
int main()
{
unsigned long long a,b,c,d,ab,cd;
cin>>a>>b>>c>>d;
ab=a;
cd=c;
for(int i=1;i<b;i++){
    ab=ab*a;
}
//cout<<ab<<endl;

for(int i=1;i<d;i++){
    cd=cd*c;
}
//cout<<cd<<endl;
if(ab>cd){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
return 0;
}