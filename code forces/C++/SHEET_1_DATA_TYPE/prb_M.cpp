#include<iostream>
using namespace std;
int main()
{
     char x;
     cin>>x;
     int y = static_cast<int>(x);
if(y>=65 && y<=90) {
    cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
}
else if(y>=48 && y<=57)
{
   
    cout<<"IS DIGIT"<<endl;
}
else if(y>=97 && y<=122) {
     cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
}
return 0;
}
