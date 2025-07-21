#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<=n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout << "After bubble sort, the array will be: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}