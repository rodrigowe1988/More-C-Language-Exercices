//
//  main.c
//  tabuadas
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j;
        
    for (i = 1; i <= 10; i++) {
        for (j = 0; j<= 10; j++) {
            printf("%d + %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
