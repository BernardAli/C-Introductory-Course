#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    for(int i=0; i<10; i++){
        if(i==5){
            continue;
        }
        printf("%d", i);
    }

    return 0;
}