//
//  main.c
//  guessingGame
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int secretNumber = 5;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    
    
    while (guess != secretNumber && outOfGuesses == 0) {
        if(guessCount < guessLimit){
            printf("Type on a number: \n");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("You have used all your chances!!! Try again one more time...\n");
    } else {
        printf("Hey, you did it!!!\n");
    }
    
    return 0;
}

