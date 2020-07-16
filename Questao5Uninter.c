//
//  main.c
//  questao5Uninter
//
//  Created by Rodrigo Weber on 14/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

int inicio, final; //declarando de forma global as variáveis a serem utilizadas

int counterIterative(int inicio, int final);//funções que serão utilizadas na função main
int counterRecursive(int inicio, int final);

int main(){
    
    printf("Digite os dois últimos digitos do seu RU:\n");  //entrada de dadoos
    scanf("%d", &inicio);                        //armazenar dados na variável início
    printf("Digite até qual número você quer que seja contado:\n"); //entrada de dados
    scanf("%d", &final);                         //armazenar dados na variável final
    
    int a = counterIterative(inicio, final); //chamando as funções
    int b = counterRecursive(inicio, final);
    printf("O resultado da forma ITERATIVA foi : %d\n\n", a);
    printf("O resultado da forma RECURSIVA foi: %d\n\n", b);
    
    return 0;
}

int counterIterative(inicio, final){        // forma iterativa para fazer
    int i = 0, counter1 = 0;                // fazer a contagem dos números entre
    for(i = inicio; i <= final; i++){       // os dois valores digitados
    counter1++;
    }
    return counter1;
}

int counterRecursive(inicio, final){        //função com a forma recursiva
    int counter2;                           //para fazer a contagem entre os
    if(inicio == final){                    //dois números digitados pelo usuário
        return 1;
    } else {
    counter2 = 1 + counterRecursive(inicio + 1, final);
        return counter2;
    }
}
