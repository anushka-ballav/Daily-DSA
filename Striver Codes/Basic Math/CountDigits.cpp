#include<iostream>
using namespace std;

int main() {
    int n,count=0;
    cout << "Enter a number: ";
    cin >> n;
    while(n>0) {
        int r=n%10;
        count++;
        n=n/10;
    }
    cout << "The number of digits is: " << count;
    return 0;    
}