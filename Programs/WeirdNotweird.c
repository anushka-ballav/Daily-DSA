#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=100) {
		if(n%2==0) {
			if(n>=2 && n<=5)
				printf("Not Weird");
			else if(n>=6 && n<=20) 
				printf("Weird");
			else if(n>20)
				printf("Not Weird");
		}
		else
			printf("Weird");
	}
	return 0;
}