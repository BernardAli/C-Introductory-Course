#include <stdio.h>
#include <string.h>

int main() {
    char grade;
    printf("Enter your grade (A - F): ");
    scanf("%s", &grade);

    switch (grade)
    {
    case 'A':
        printf("Execelent");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Average");
        break;
    case 'D':
        printf("Pass");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("Enter valid grade: ");
        break;
    }
    return 0;
}