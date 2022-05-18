//ESTRUTURA CONDICIONAL COMPOSTA (IF-ELSE)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float orcamento;
    printf("Digite o valor do orcamento para a viagem \n");
    scanf("%f", &orcamento);
    if (orcamento >= 10000){
    printf ("\n Joao e Maria possuem dinheiro suficiente para uma viagem internacional");}
    else {
        printf("\n Joao e Maria farao uma viagem nacional, tendo em vista que nao possuem dinheiro suficiente para uma viagem ao exterior");}
    printf("\n");
    system("pause");
    return(0);
    }