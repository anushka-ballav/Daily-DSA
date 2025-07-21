#include <stdio.h>
int main() {
	int a[100],b[100],n,i,j,k,temp;
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the values into the array: ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("The array is: ");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++) {
		b[i]=a[i]*a[i];
		//printf("%d ",b[i]);
	}
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(b[i]<b[j]) {
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("\nAfter sorting in descending order, the new array is: ");
	for(i=0;i<n;i++) {
		printf("%d ",b[i]);
	}
	return 0;
}