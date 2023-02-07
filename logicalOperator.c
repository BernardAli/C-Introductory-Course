#include <stdio.h>
#include <stdbool.h>

int main() {
    float temp = 25;
    bool sunny = false;
    if (temp >= 0 && temp <= 30 && sunny) {
        printf("Good weather!\n");
    }
    else if (temp >= 0 && temp <= 30 || !sunny) {
        printf("Normal weather!\n");
    }
    else{
        printf("Freezing weather!\n");
    }
}
