//
//  main.c
//  stringFunction
//
//  Created by Rodrigo Weber on 03/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

void sayHi(char name[], int age);

int main(){

    printf("Top\n");
    sayHi("Rodrigo", 32);
    printf("Bottom\n");

    return 0;
}

void sayHi(char name[], int age){

    printf("%s Hi there! Are you really %d years old?\n", name, age);
}
