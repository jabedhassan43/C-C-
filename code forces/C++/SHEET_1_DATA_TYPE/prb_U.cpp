#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int x=n;
    float y=n;
    float z=y-x;
    if(z==0) {
        cout<<"int "<<n<<endl;
    }
    else {
         cout<<"float "<<x<<" "<<z<<endl;
    }

    return 0;
}