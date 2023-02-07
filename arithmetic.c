#include <stdio.h>

int main() {

    int x = 25, y = 15;
    y--;
    float z = x % y;
    z++;

    int a = 0;
    a+=z;

    printf("a = %d, x = %d, y = %d, z = %f",a, x, y, z);
}