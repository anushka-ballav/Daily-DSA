#include<iostream>
using namespace std;

int main() {
    int n,rem,rev=0;
    cout << "Enter a number: ";
    cin >> n;
    int temp=n;
    while(n>0) {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(temp==rev) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;    
}