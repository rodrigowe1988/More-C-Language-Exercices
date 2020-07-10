//
//  main.c
//  qualNumeroEhMaior
//
//  Created by Rodrigo Weber on 06/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define ehMaior(x, y) x > y ? x : y

int main(int argc, const char * argv[]) {
    
    int a = 10;
    int b = 5;
    int c = ehMaior(a, b);
    
    printf("%d é o número maior\n", c);
    
    return 0;
}
