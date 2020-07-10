//
//  main.c
//  ifStatements
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

void whoIsTheBiggestOne(int num1, int num2, int num3);

int main(int argc, const char * argv[]) {
    
    whoIsTheBiggestOne(10, 10, 13);
    
    return 0;
}

void whoIsTheBiggestOne(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        printf("%d is the biggest one!\n", num1);
    } else if (num1 == num2 && num1 == num3 && num2 == num3){
        printf("The three numbers are equal!\n");
    } else if (num2 > num1 && num2 > num3){
        printf("%d is the biggest one!\n", num2);
    } else {
        printf("%d is the biggest one!\n", num3);
    }
}
