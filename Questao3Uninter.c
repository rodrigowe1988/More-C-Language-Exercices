//
//  main.c
//  questao3Uninter
//
//  Created by Rodrigo Weber on 14/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

    int main(){
    int num;            //número do RU do aluno
    char name[20];      //Array de caracteres para salvar o nome do aluno
    
    printf("Digite o nome do Aluno: \n");
    scanf("%s", name);          //armazena o nome na variável de nome name
    printf("Digite o codigo do aluno: \n");
    scanf("%d", &num);          // armazena o RU na variável num
        
    printf("O nome do aluno é: %s.\n", name);   //Imprime na tela o nome do aluno
    printf("Codigo do aluno: %d\n", num);       //Imprime na tela o RU do aluno
        
    return 0;
}

