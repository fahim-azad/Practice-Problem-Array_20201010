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
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else if (arr[i] == 2) count2++;
    }
    for (int i = 0; i < count0; i++) arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++) arr[i] = 1;
    for (int i = count0 + count1; i < count0+count1+count2; i++) arr[i] = 2;
    for (int i = 0; i < count0+count1+count2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
