#include <stdio.h>

void printNumbers(int n)
{
    if (n > 0) 
	{
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d numbers are : ", n);
    printNumbers(n);
    printf("\n");

    return 0;
}

