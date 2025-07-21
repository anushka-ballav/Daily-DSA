#include<stdio.h>

int max(int arr[], int n) {
    int x=0;
    for(int i=1;i<n-1;i++) {
        int left=arr[i];
        for(int j=0;j<i;j++) {
            if(arr[j]>left) {
                left=arr[j];
            }
        }
        int right=arr[i];
        for(int j=i+1;j<n;j++) {
            if(arr[j]>right) {
                right=arr[j];
            }
        }
        x+=(left<right?left:right)-arr[i];
    }
    return x;
}

int main() {
    int arr[]={2, 1, 5, 3, 1, 0, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d", max(arr,n));
    return 0;
}