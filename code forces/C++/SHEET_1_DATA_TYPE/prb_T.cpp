#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
   int max,mid,min;
    //maximum
    if(a>=b && a>=c){
         max=a;
         }
    else if(b>=a && b>=c){
         max=b;
         }    
    else {
         max=c;
         }
 
    // minimum  
    if(a<=b && a<=c){
         min=a;
         }
    else if(b<=a && b<=c){
         min=b;
         }
    else {
         min=c;
         }     
      mid=(a+b+c)-(max+min);
    cout<<min<<endl<<mid<<endl<<max<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}

//chatgpt
// #include <iostream>
// using namespace std;

// int main() {
//     int A, B, C;
//     cin >> A >> B >> C;

//     // Print the values in ascending order using conditions
//     if (A <= B && A <= C) {
//         if (B <= C) {
//             cout << A << endl << B << endl << C << endl;
//         } else {
//             cout << A << endl << C << endl << B << endl;
//         }
//     } else if (B <= A && B <= C) {
//         if (A <= C) {
//             cout << B << endl << A << endl << C << endl;
//         } else {
//             cout << B << endl << C << endl << A << endl;
//         }
//     } else {
//         if (A <= B) {
//             cout << C << endl << A << endl << B << endl;
//         } else {
//             cout << C << endl << B << endl << A << endl;
//         }
//     }

//     // Print a blank line
//     cout << endl;

//     // Print the values as they were read
//     cout << A << endl;
//     cout << B << endl;
//     cout << C << endl;

//     return 0;
// }
