//
//  main.c
//  switchStatements
//
//  Created by Rodrigo Weber on 04/07/20.
//  Copyright © 2020 Rodrigo Weber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void notaNaProva(int nota);

int main(int argc, const char * argv[]) {
    
    notaNaProva(6);
    
    return 0;
}

void notaNaProva(int nota){
    switch(nota){
        case 10:
            printf("Parabéns, você gabaritou a prova!\n");
            break;
        case 9:
            printf("Você foi muito bem na prova. Continue com esse ótimo desempenho!\n");
            break;
        case 8:
            printf("Sua nota foi muito boa, porém sabe que seu potencial é maior. Esforce-se cada vez mais!\n");
            break;
        case 7:
            printf("Você tirou a nota mínima necessária para passar. Nunca esteja satisfeito com o mínimo.\n");
            break;
        default:
            printf("Você não alcançou a nota mínima necessária para passar. Estude para a recuperação.\n");
    }
        
}
