#include <stdio.h>
int main() {
    int n, i;
    long sum_of_squares = 0, square_of_sum = 0, diff;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    while(getchar() != '\n'); // Clear input buffer
    if(n <= 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }
    for(i=1; i<=n; i++) {
        sum_of_squares += i*i;
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum;
    diff = square_of_sum - sum_of_squares;
    printf("The difference is: %ld", diff);
    return 0;
}