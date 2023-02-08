#include <stdio.h>
#include <string.h>
#include <math.h>

typedef char user[25];

struct Student
{
    char name[12];
    float gpa;
};


int main(){

    struct Student student1 = {"Ben", 3.31};
    struct Student student2 = {"Baggio", 3.05};
    struct Student student3 = {"Isaac", 3.21};
    struct Student student4 = {"Derrick", 2.9};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }   

    return 0;
}