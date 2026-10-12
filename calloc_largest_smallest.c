
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n, i;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size");
        return 0;
    }

    a = (int *)calloc(n, sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    free(a);

    return 0;
}
