
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *temp;
    int n, new_n, i;

    printf("Enter initial array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size");
        return 0;
    }

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter initial elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter new array size: ");
    scanf("%d", &new_n);

    if (new_n < n || new_n <= 0) {
        printf("New size must be greater than initial size");
        free(a);
        return 0;
    }

    temp = (int *)realloc(a, new_n * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed");
        free(a);
        return 1;
    }

    a = temp;

    printf("Enter new elements: ");
    for (i = n; i < new_n; i++) {
        scanf("%d", &a[i]);
    }

    printf("All array elements: ");
    for (i = 0; i < new_n; i++) {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}
