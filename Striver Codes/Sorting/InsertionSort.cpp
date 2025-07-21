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
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout << "After insertion sort, the array will be: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}