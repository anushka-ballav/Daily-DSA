#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high) {
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++) {
        arr[i]=temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low>=high) {
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
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
    mergeSort(arr,0,n-1);
    cout << "After merge sort, the array will be: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}