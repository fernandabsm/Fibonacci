#include <stdio.h>
#include <stdlib.h>

void fiboncci(int n)
{
    int sum = 0, next = 1, previous = 0;
    printf("%d \n", sum);
    printf("%d \n", next);
    for (int i = 0; i < n - 2; i++)
    {
        sum = previous + next;
        printf("%d \n", sum);
        previous = next;
        next = sum;
    }
}

int main()
{
    int n;
    printf("Enter how many terms in the Fibonacci sequence you want to see: \n");
    scanf("%d", &n);
    fiboncci(n);

}