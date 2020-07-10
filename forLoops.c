//
//  main.c
//  forLoops
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int luckyNumbers[] = {2, 5, 8, 14, 17, 23, 32, 71, 89};
    int size = sizeof luckyNumbers / sizeof luckyNumbers[0];
    
    for(int number = 0; number < size; number++){
            printf("%d\n", luckyNumbers[number]);
    }
    
    
    return 0;
}
