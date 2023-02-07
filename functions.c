#include <stdio.h>
#include <math.h>

void greetings(char name[]){
    printf("Hello %s \n", name);
}

double add(double x, double y){
    return x + y;
}

int main() {
    greetings("Bernard Ali \n");
    printf("The result is %.4lf \n", add(2, 1024));
    printf("%.2lf \n", pow(2, 5));
}