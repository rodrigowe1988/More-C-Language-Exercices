//
//  main.c
//  forLoopsXAndY
//
//  Created by Rodrigo Weber on 05/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int x = 5, y = 10; x < y; x++, y--) {
        printf("%d %d\n", x, y);
    }
    
    printf("Hello, World!\n");
    return 0;
}
