/* 1 2 3 4 5 
   1 2 3 4
   1 2 3
   1 2
   1 */

#include <iostream>
using namespace std;

int main() {
    int rows=5;
    for(int i=rows;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}