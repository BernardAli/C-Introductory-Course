#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    double price[10] = {0,1,2,3,4,5,6,7};
    price[0] = 12.5;
    price[1] = 122.5;
    char name [] = "Bro";

    printf("%.2lf\n", price[0]);
    printf("%.2lf\n", price[10]);
    return 0;
}