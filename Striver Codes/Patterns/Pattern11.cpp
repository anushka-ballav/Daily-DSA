/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15 */

#include<iostream>
using namespace std;

int main() {
    int n,c=1;
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}