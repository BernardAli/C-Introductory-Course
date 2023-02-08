#include <stdio.h>
#include <string.h>
#include <math.h>

typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main(){

    // user user1 = "Ben";

    User user1 = {"Ben", "password123", 123};
    User user2 = {"Eddie", "password123", 111};

    printf("%s\n", user1.name);

    return 0;
}