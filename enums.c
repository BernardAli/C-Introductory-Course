#include <stdio.h>
#include <string.h>
#include <math.h>

enum Day{Sun=1, Mon=2, Tue=3, Wed=4,Thu=5,Fri=6,Sat=7};


int main(){
    enum Day today = Wed;

    printf("Today %d\n", today);

    if(today == Sun || today == Mon) {
        printf("It's weekend, Party time!");
    }
    else {
        printf("I have to work hard");
    }

    return 0;
}