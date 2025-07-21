#include<stdio.h>
struct Student 
{
	int roll;
	char sec;
};
int main() {
	int n,x;
	n=6;
	x=++n;
	int *ptr=calloc(x*sizeof(int));
	for(int i=0;i<3;i++)
		ptr[i]=i;
	for(int i=0;i<x;i++)
		printf("%d",ptr[i]);
	free(ptr);
	return 0;
}