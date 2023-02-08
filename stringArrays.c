#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"Nissan", "Toyota", "Audi"};

    strcpy(cars[0], "Tesla");

    printf("%s\n", cars[0]);

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    

    return 0;
}