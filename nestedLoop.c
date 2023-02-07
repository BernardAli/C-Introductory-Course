#include <stdio.h>


int main() {
    int number;

    char symbol;
    scanf("%c", &symbol);

    printf("Enter the number you want the multiplication table for: ");
    scanf("%d", &number);


    for (int i = 0; i <= 12; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }
    
    for (int i = 0; i <= 3; i++)
    {
       for (int j = 0; j <= 3; j++)
       {
        printf("%c", symbol);
       }
       printf("%c\n", symbol);
    }
    
}