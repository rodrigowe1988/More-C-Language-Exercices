//
//  main.c
//  2DArrays&NestedLoops
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int nums [3] [2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\n", nums[i][j]);
        }
    }
    
    return 0;
}
