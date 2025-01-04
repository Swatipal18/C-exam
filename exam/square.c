#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Squares of the elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");

    return 0;
}
