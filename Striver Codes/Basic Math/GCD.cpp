#include<iostream>
using namespace std;

int main() {
    int n1,n2;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;
    int a=n1,b=n2;
    while(b!=0) {
        int temp=b;
        b=a%b;
        a=temp;  
    }
    int gcd = a;
    cout << "The GCD of " << n1 << " and " << n2 << " is: " << gcd;
    return 0; 
}