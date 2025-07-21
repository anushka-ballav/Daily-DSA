/*#include<stdio.h>
int main()
{
	int x,y,z;
	float s;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	printf("Enter z: ");
	scanf("%d",&z);
	switch(x)
	{
		case 0:
		s=y+z;
		printf("Value: %f",s);
		break;
		
		case 1:
		s=y-z;
		printf("Value: %f",s);
		break;
		
		case 2:
		s=y*z;
		printf("Value: %f",s);
		break;
		
		case 3:
		s=y/(z*1.0f);
		printf("Value: %f",s);
		break;
		
		default:
		printf("Wrong choice!!");
	}
}
#include<stdio.h>
int main()
{
	int size,v,i,a[100];
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	printf("The array is: ");
	for(i=0;i<size;i++)
		printf("%d",a[i]);
	return 0;
}*/

#include<stdio.h>
void main()
{
	int M,N,i,j,k=0;
	int a[M],b[N],c[M+N];
	printf("Enter the length of 1st array: ");
	scanf("%d",&M);
	printf("Enter the values of 1st array:");
	for(i=0;i<M;i++)
	{
		scanf("%d",&a[i]);
		c[k]=a[i];
		k++;
	}
	printf("Enter the length of 2nd array: ");
	scanf("%d",&N);
	printf("Enter the values of 2nd array:");
	for(j=0;j<N;j++)
	{
		scanf("%d",&b[j]);
		c[k]=b[j];
		k++;
	}
	printf("After merging the resultant array is: ");
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
}
