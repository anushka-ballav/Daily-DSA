#include <iostream>
using namespace std;

int largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the no. of the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "Largest element is:: " << largestElement(arr,n) << endl;
    return 0;
}