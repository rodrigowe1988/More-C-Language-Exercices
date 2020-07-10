//
//  main.c
//  betterCalculator
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    double num1;
    double num2;
    char op;
    
    printf("Type on a number: \n");
    scanf("%lf", &num1);
    printf("Type on the operator that you want to use : \n");
    scanf(" %c", &op);
    printf("Type on a number: \n");
    scanf("%lf", &num2);
    
    if(op == '+'){
        printf("The sum of this two numbers is %.2f.\n", num1 + num2);
    } else if(op == '-'){
        printf("The substraction of this two numbers is %.2f.\n", num1 - num2);
    } else if(op == '*'){
        printf("The multiplication of this two numbers is %.2f.\n", num1 * num2);
    } else if(op == '/'){
        printf("The division of this two numbers is %.2f.\n", num1 / num2);
    } else {
        printf("This is an invalid operator!!!\n");
    }
    
    return 0;
}
