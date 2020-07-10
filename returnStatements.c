//
//  main.c
//  returnStatements
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

void cube(int number);

int main(int argc, const char * argv[]) {
    
    cube(5);
    
    return 0;
}

void cube(int number){
    int cubeNumber = number * number * number;
    printf("The cube of the %d is %d\n", number, cubeNumber);
}
