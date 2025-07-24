#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<=j) {
        while(i<=high && arr[i]<=pivot) {
            i++;
        }
        while(j>=low && arr[j]>pivot) {
            j--;
        }
        if(i<j) {
            swap (arr[i], arr[j]);
        }
    }
    swap (arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if(low<high) {
        int pIndex=partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
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
    quickSort(arr,0,n-1);
    cout << "After quick sort, the array will be: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}