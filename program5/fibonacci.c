#include<stdio.h>
int main ()
{
    int n;
    //taking input from user
    printf("Enter a number of terms in series: ");
    scanf ("%d", &n);
    //function calling
    fib (n);
    return 0;
}
// function definition
int fib (int n)
{
    int prev = -1, next = 1, result;
    //calculation of series
    do
    {
        result = next + prev;
        printf ("%d ", result);
        prev = next;
        next = result;
        n--;
    } while (n);
    return 0;
}
