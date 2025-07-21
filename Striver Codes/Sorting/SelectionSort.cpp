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
    for(int i=0;i<=n-2;i++) {
        int min=i;
        for(int j=i;j<=n-1;j++) {
            if(arr[j]<arr[min]) {
                min=j;
            }
        }
        if(arr[min]!=arr[i]) { //swap(arr[min], arr[i]);
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    cout << "After selection sort, the array will be: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}