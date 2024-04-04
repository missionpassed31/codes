#include <stdio.h>

void MaxMin(int i, int j, int a[], int *max, int *min) {
    int mid, max1, min1;

    if (i == j) {
        *max = *min = a[i];
    } else if (i == j - 1) {
        if (a[i] < a[j]) {
            *max = a[j];
            *min = a[i];
        } else {
            *max = a[i];
            *min = a[j];
        }
    } else {
        mid = (i + j) / 2;
        MaxMin(i, mid, a, &max1, &min1);
        MaxMin(mid + 1, j, a, &max1, &min1);
        
        if (*max < max1)
            *max = max1;
        
        if (*min > min1)
            *min = min1;
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max, min;
    MaxMin(0, n - 1, a, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
