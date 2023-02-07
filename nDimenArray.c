#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    int numbers[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {2, 4, 6, 8}};
    printf("%d\n", numbers[0][1]);

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("Rows -> %d\n", rows);
    printf("Columns -> %d\n", columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}