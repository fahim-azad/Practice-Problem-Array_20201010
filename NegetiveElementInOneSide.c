#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = 0;
    while (j < n) {
        if (arr[j] < 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
        j++;
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}
