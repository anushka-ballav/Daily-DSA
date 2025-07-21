#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int sumOfSquares=(N*(N+1)*(2*N+1))/6;
        int sum=(N*(N+1))/2;
        int squareOfSum=sum*sum;
        cout << abs(sumOfSquares-squareOfSum) << endl;
    }
    return 0;
}