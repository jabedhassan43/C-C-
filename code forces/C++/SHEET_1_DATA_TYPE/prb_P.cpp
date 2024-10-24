#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    y=x;
    int count = -1;
    // digit number store in y
    while(y!=0){
       y=y/10;
       count++;
    }
    //first digit store in z
     if(count==2){
       z = x/100;
     }
     else if(count==3){
       z = x/1000;
     }
     // Even Odd condition on z {first number}
    if(z%2==0) 
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
return 0;
}
