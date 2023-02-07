#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    x = 123;
    int y = 123;

    float gpa = 2.05;
    char grade = 'A';
    char name[] = "Ben Ali";

    char mine = 100;

    bool e = true;

    unsigned short fee = 5100;
    unsigned int fees = 5100000;

    printf("%i \n", x);
    printf("My cgpa is %.1f\n", gpa);
    printf("My grade is %s\n", name);
    printf("%d\n", e);
    printf("%d\n", mine);
    printf("%c\n", mine);
    printf("%d\n", fee);
    printf("%u\n", fees);

    return 0;
}