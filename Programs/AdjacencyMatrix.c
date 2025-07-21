#include<stdio.h>
#define v 5
int main() {
	int a[5][5],i,j;
	/*for(i=0;i<v;i++) {
		for(j=0;j<v;j++) {
			if(i==j)
				a[i][j]=0;
		}
	}*/
	for(i=0;i<v;i++) {
		for(j=0;j<v;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<v;i++) {
		for(j=0;j<v;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}