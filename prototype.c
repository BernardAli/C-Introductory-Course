#include <stdio.h>
 
void hello(char name[], int age); // function prototype


int main() {
    hello("Ben", 82);
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}
