#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


int main(){

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    
    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("Too high!\n");
        } else if(guess < answer){
            printf("Too low!\n");
        }else{
            printf("CORRECT!");
        }
        guesses++;
    } while(guess != answer);

    printf("**************\n");
    printf("answer %d\n", answer);
    printf("guesses %d\n", guesses);
    printf("**************");

    return 0;
}