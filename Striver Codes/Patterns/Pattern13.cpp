/* A B C D E 
   A B C D
   A B C
   A B
   A */

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=n;i>0;i--) {
        for(char ch='A';ch<'A'+i;ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}