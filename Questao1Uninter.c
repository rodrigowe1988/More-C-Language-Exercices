//
//  main.c
//  questao1Uninter
//
//  Created by Rodrigo Weber on 14/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include<stdio.h>  //(standard input-output header) entrada e saída
#include<stdlib.h> //funções de alocação de memória, controle de processos, conversões

int main() {

    int number1;            //criando a variável inteira (integer)
    float number2;             //criando a variável de ponto flutuante
    char letter;          //variável para adicionar o caractere
    
    //criando ponteiros para "manipular" o valor presente nas variáveis
    int *pontInteger = &number1;
    float *pontReal = &number2;
    char *pontChar = &letter;
    
    //imprimindo os valores sem atribuir os valores específicos a cada variável
    printf("Antes da função:\n");
    printf("%d\n", number1);
    printf("%.2f\n", number2);
    printf("%c\n", letter);
    printf("\n");
    
    //usando os ponteiros para atribuir valores a cada uma das variáveis
    *pontInteger = 33;    // os 2 dígitos do meu RU - 910033
    *pontReal = 00.33;    // os 4 últimos dígitos do meu RU
    *pontChar = 'R';      // a primeira letra do meu nome 'Rodrigo'

    //comandos para imprimir na tela os valores após a atribuição dos valores
    printf("Depois da função:\n");
    printf("%d\n", number1);
    printf("%.2f\n", number2);
    printf("%c\n", letter);
    printf("\n");
    
    return 0;
}

