//ESTRUTURA CONDICIONAL SIMPLES (IF)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero ");
    scanf("%d", &n2);
    
    if (n1 == n2) {
        printf("Os numeros sao iguais!");
    } 
    printf("\n"); //Pula uma linha
    system("pause"); //Pausa o programa, ate receber um input
    return (0);
}