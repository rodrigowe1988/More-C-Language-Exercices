//
//  main.c
//  aula07Struct
//
//  Created by Rodrigo Weber on 06/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

struct Funcionario {
    int matricula;
    float salario;
}; struct Funcionario tecnico;

int main(int argc, const char * argv[]) {
    
    printf("Digite a matricula do funcionário:\n");
    scanf("%d", &tecnico.matricula);
    
    printf("Digite o salário do funcionário: \n");
    scanf("%f", &tecnico.salario);
    
    printf("Dados do Funcionário:\n");
    printf("Mátricula do funcionário: %d\n", tecnico.matricula);
    printf("Salário do funcionário: R$%.2f\n\n", tecnico.salario);
    
    return 0;
}
