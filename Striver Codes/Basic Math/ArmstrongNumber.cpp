#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,sum=0;
    cout << "Enter a number: ";
    cin >> n; //371
    int temp=n;
    while(n>0) {
        int r=n%10; //1 7 3
        sum=sum+pow(r,3); //1 344 371
        n=n/10; //37 3
    }
    if(temp==sum) { //371==371
        cout << "Armstrong";
    } else {
        cout << "Not Armstrong";
    }
    return 0;
}