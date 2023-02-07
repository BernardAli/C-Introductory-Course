#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char name[25];

    printf("What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';


    while(strlen(name) == 0) {
        printf("\nYou did not enter your name");
        printf("What's your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("Hello %s\n", name);

    return 0;
}