#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int maxOfRest = findMax(arr, n - 1);

    if (maxOfRest > arr[n - 1]) {
        return maxOfRest;
    } else {
        return arr[n - 1];
    }
}

int main() {
    int arr[100]; // Assuming a maximum of 100 integers, you can change this if needed
    int n = 0;
    int num;

    printf("Enter integers (enter -1 to stop):\n");

    while (1) {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        arr[n] = num;
        n++;
    }

    if (n == 0) {
        printf("No integers entered.\n");
        return 1;
    }

    int max = findMax(arr, n);
    printf("The maximum element is: %d\n", max);

    system("pause");
}
