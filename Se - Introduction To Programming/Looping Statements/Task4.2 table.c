#include <stdio.h>

int main()
{
    int n, i = 1; // initialization
    printf("Table of: ");
    scanf("%d", &n); // user i/p for multiplication table

    while (i<=10) // condition
    {
        printf("%d * %d = %d\n", n, i, n * i); // table logic
        i++; // increment
    }
}

