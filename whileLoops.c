//
//  main.c
//  whileLoops
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number = 0;
    
    do{
        printf("%d\n", number);
        number++;
    }
    while (number <= 5);
       
    return 0;
}
