// Exercicio de Condicional Composta - CNH

#include<stdio.h>

int main () {
    
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Voce ja pode tirar a CNH");
    } else {
        printf("Voce ainda nao possui idade suficiente, volte quando completar 18 anos");
    }
    return 0;
}