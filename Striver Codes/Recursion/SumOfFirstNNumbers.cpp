#include<iostream>
using namespace std;

int Sum(int n) {
    if(n==0) {
        return 0;
    }
    return n+Sum(n-1);
}

int main() {
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    cout << "The sum of first " << n << " numbers is: " << Sum(n) << endl;
}