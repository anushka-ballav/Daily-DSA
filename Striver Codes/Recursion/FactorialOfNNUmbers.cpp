#include<iostream>
using namespace std;

int fact(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    cout << "The factorial of " << n << " numbers is: " << fact(n) << endl;
}