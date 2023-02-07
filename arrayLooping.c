#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    double price[] = {0,1,2,3,4,5,6,7, 8, 9, 10, 11, 12, 13};
    price[0] = 12.5;
    price[1] = 122.5;
    char name [] = "Bro";

    printf("%.2lf\n", price[0]);

    printf("%ld \n", sizeof(price)/sizeof(price[0]));

    int arrayLength = sizeof(price)/sizeof(price[0]);
    printf("%ld \n", arrayLength);

    for ( int i = 0; i < arrayLength; i++)
    {
        printf("%.2lf\n", price[i]);
    }
    

    return 0;
}