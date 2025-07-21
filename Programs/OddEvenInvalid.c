#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if(isdigit(n) && n>=0) {
		if(n%2==0)
			printf("Even");
		else
			printf("Odd");
	}
	else
		printf("Invalid");
	return 0;
}