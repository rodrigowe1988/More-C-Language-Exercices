//
//  main.c
//  questao4Uninter
//
//  Created by Rodrigo Weber on 16/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MEU_RU 910033

    int main(){
    int num;       //número do RU do aluno
    char name[20]; //Array de caracteres para salvar o nome do aluno
        
    printf("Digite o nome do Aluno: \n");
    scanf("%s", name); //armazena o nome na variável de mesmo name
    printf("Digite o codigo do aluno: \n");
    scanf("%d", &num); // armazena o RU na variável num
        
    //ponteiros e as variáveis para as quais estão apontando
    int *pNum;
    char *pName[20];
    *pName = name;
    pNum = &num;
    
    //printf("%s\n", name);
    printf("O nome do aluno é: %s.\n", *pName); //Imprime na tela o nome do aluno
    printf("Codigo do aluno: %d\n\n", *pNum); //Imprime na tela o RU do aluno
        
    printf("Meu Ru é: %i\n\n", MEU_RU); //como solicitado imprimir na tela meu RU
        
    return 0;
}
