//
//  main.c
//  typedefStruct
//
//  Created by Rodrigo Weber on 06/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>

typedef int RU;
typedef float nota;

struct notasAluno {
    
    RU matricula;
    nota prova1;
    nota prova2;
};typedef struct notasAluno n_aluno;

int main(int argc, const char * argv[]) {
    
    n_aluno aluno;
    nota media = 0;
    
    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &aluno.matricula);
    
    printf("Digite a nota da primeira prova do aluno: \n");
    scanf("%f", &aluno.prova1);
    
    printf("Digite a nota da segunda prova do aluno: \n");
    scanf("%f", &aluno.prova2);
    
    media = (aluno.prova1 + aluno.prova2) / 2;
    
    printf("A número de matrícula do aluno é : %d.\n", aluno.matricula);
    printf("A média do aluno nas duas provas foi de %.2f pontos.\n", media);
    return 0;
}
