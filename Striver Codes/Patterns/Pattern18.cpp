/* *        *
   **      **
   ***    ***
   ****  ****
   **********
   ****  ****
   ***    ***
   **      **
   *        * */

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << "*";
        }
        for(int j=0;j<2*(n-i-1);j++) {
            cout << " ";
        }
        for(int j=0;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    int i;
    if(i>n) {
        for(int i=1;i<=n;i++) {
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            for(int j=0;j<i*2;j++) {
                cout << " ";
            }
            for(int j=0;j<n-i;j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}