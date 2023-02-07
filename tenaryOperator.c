#include <stdio.h>
#include <math.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main() {
    printf("Max: %d\n", max(20, 40));
}