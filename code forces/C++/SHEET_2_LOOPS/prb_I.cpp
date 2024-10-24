#include<iostream>
using namespace std;

int main()
{
    int n,l;
     cin>>n;
     l=n;
    int c = 0;
    // digit number store in l
      while(l!=0)
     {
       l=l/10;
       c++;
     }  
      string r = to_string(n);
      string r2=to_string(n);
       
        
     for(int i=0;i<c/2;i++){
        char temp = r [i];
        r[i] = r[c - i - 1];
        r[c - i - 1] = temp;
     }
       int reversed_n = 0; 
        bool leading_zero = true; 
      while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        n = n / 10;  // Remove the last digit from n

        // Avoid printing leading zeroes
        if (digit != 0) {
            leading_zero = false;  // Found the first non-zero digit
        }

        if (!leading_zero) {
            reversed_n = reversed_n * 10 + digit;  // Form the reversed number
            cout << digit; // Print the digits of the reversed number without leading zeroes
        }
    }

     cout<<endl;
   if(r==r2){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}