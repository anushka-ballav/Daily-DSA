#include<iostream>
using namespace std;

void func(int n, int i) {
    if(n<i) 
        return;
    cout << n << " ";
    func(n-1,i);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    func(n,1);
    return 0;
}