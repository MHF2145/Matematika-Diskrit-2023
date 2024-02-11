#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b; // GCD of 0 and any number is the other number
    }

    return gcd(b % a, a); // Recursively compute GCD using the fact gcd(a, b) = gcd(b % a, a)
}

int main()
{
    int a, b;

    printf("Enter two non-negative integers (a < b): ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0 || a >= b)
    {
        printf("Invalid input. Please make sure a < b.\n");
        return 1;
    }

    int result = gcd(a, b);
    printf("The GCD of %d and %d is: %d\n", a, b, result);

    system("pause");
}
