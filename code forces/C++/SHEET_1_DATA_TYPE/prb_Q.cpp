#include<iostream>
using namespace std;
int main()
{ 
    float x,y;
    cin>>x>>y;
    if (x == 0 && y == 0) {
        cout << "Origem" << endl;
    }
     else if (x == 0) {
        cout << "Eixo Y" << endl; // Point is on the Y-axis
    } 
    else if (y == 0) {
        cout << "Eixo X" << endl; // Point is on the X-axis
    } 
    else if(x>0 && y>0) {
        cout<<"Q1"<<endl;
    }
    else if(x<0 && y>0) {
        cout<<"Q2"<<endl;
    }
    else if(x<0 && y<0) {
        cout<<"Q3"<<endl;
    }
    else if(x>0 && y<0) {
        cout<<"Q4"<<endl;
    }
 
return 0;
}