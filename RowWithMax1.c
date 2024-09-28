#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the matrix elements (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max_row_index = -1;
    int max_ones = -1;
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
        if (count > max_ones) {
            max_ones = count;
            max_row_index = i;
        }
    }
    printf("Row with maximum number of 1s: %d\n", max_row_index);
    return 0;
}
