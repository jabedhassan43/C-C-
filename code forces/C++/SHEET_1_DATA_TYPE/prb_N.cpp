#include<iostream>
using namespace std;
int main()
{
     char x;
     cin>>x;
     int y = static_cast<int>(x);
     char lc=static_cast<char>(y+32);
     char uc=static_cast<char>(y-32);
     if(y>=65 && y<=90) {
         cout<<lc<<endl;
     }
     else if(y>=97 && y<=122){
         cout<<uc<<endl;
     }
return 0;
}
