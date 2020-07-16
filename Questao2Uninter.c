//
//  main.c
//  questao2Uninter
//
//  Created by Rodrigo Weber on 14/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    int RU1, valor1, RU2, valor2;   //declarando as variáveis do tipo inteiro

    //Solicitar e armazenar os dados do usuário nas variáveis acima
    printf("DIGITE O PRIMEIRO RU: ");
    scanf("%i", &RU1);
    printf("DIGITE O  PRIMEIRO VALOR: ");
    scanf("%i", &valor1);

    printf("DIGITE O SEGUNDO RU: ");
    scanf("%i", &RU2);
    printf("DIGITE O VALOR: ");
    scanf("%i", &valor2);

    int *p, *q, *r, *s;         //declaração dos ponteiros e seus caminhos até
    p=&RU1;                     //as variáveis. Criei 4 variáveis para usar o caminho
    q=&RU2;                     //para facilitar o acesso aos dados armazenados
    r=&valor1;
    s=&valor2;
    
    printf("\n");
    printf("Primeiro RU digitado: %i\n", *p);   //imprimindo na tela os dois RU's
    printf("Segundo RU digitado: %i\n\n", *q);
    
    /*estrutura de repetição if com uma comparação entre dois ponteiros (r, s) para retornar o maior deles*/
    if(*r > *s){
        printf("O PRIMEIRO RU TEM MAIOR VALOR: %i\n", *r); //
    } else {                                               //
        printf("O SEGUNDO RU TEM MAIOR VALOR: %i\n", *s);
    }

    return 0;
}


