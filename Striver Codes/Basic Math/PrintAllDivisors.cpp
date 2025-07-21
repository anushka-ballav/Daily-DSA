#include<iostream>
using namespace std;

void printDivisors(int n) {
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Divisors of " << num << " are: ";
    printDivisors(num);
    return 0;
}