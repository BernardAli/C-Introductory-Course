#include <stdio.h>
#include <string.h>

void sort(char array[], int size) {
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (array[j] > array[j +1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
    }
}

void printArray(char array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    
}

int main() {
    // int array[] = {4, 5, 2, 5, 66, 32, 45, 61};
    char array[] = {'C', 'A', 'B', 'G', 'E'};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    return 0;
}