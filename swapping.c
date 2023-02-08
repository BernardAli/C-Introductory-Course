#include <stdio.h>
#include <string.h>

int main() {
    char x[15] = "apple";
    char y[15] = "banana";
    char temp[15];
    
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s, y = %s\n", x, y);

    return 0;
}