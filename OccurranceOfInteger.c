#include <stdio.h>
int main() {
    int n, i, j, temp,x, count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    if (count > 0) {
        printf("Number of occurrences of %d: %d\n", x, count);
    } else {
        printf("Number of occurrences of %d: 0\n", x);
    }
    return 0;
}