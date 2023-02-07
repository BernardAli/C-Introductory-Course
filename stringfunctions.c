#include <stdio.h>
#include <string.h>


int main() {
    char string1[] = "Bernard";
    char string2[] = "Ali";

    strlen(string1);

    
    printf("%s\n", string1);
    printf("%ld\n", strlen(string1));
    printf("%s\n", strcat(string2, string1));
    printf("%s\n", strcpy(string2, string1));
    printf("%lf\n", strcmp(string2, string1));

    return 0;
}