//
//  main.c
//  aula07Uninter
//
//  Created by Rodrigo Weber on 06/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, *y;
    
    printf("Digite um número inteiro qualquer: \n");
    scanf("%d", &x);
    
    y = &x;
    
    printf("O endereço da variável x é: %p\n", &x);
    printf("O endereço da variável x é: %p\n\n", y);
    
    return 0;
}
