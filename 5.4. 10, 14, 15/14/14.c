#include <stdio.h>

int findMode(int arr[], int n, int currentMode, int currentCount, int index)
{
    if (index == n)
    {
        if (currentCount >= n / 2)
        {
            return currentMode;
        }
        else
        {
            return -1; // No mode found
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[index])
        {
            count++;
        }
    }

    if (count > currentCount)
    {
        return findMode(arr, n, arr[index], count, index + 1);
    }
    else
    {
        return findMode(arr, n, currentMode, currentCount, index + 1);
    }
}

int main()
{
    int arr[100]; // Assuming a maximum of 100 integers, you can change this if needed
    int n = 0;
    int num;

    printf("Enter integers (enter -1 to stop):\n");

    while (1)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num == -1)
        {
            break;
        }

        arr[n] = num;
        n++;
    }

    if (n == 0)
    {
        printf("No integers entered.\n");
        return 1;
    }

    int mode = findMode(arr, n, arr[0], 1, 1);

    if (mode != -1)
    {
        printf("The mode is: %d\n", mode);
    }
    else
    {
        printf("No mode found.\n");
    }

    system("pause");
}
