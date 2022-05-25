#include <stdio.h>
#include<conio.h>

int main (void){
    // variavel que sera apontada pelo ponteiro
    int valor = 27;
    
    // variavel ponteiro, tipo int
    int *ponteiro;
    
    // atribuindo o endereco da variavel valor ao ponteiro
    ponteiro = &valor;
    
    printf("Utilizando ponteiros \n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereco da variavel valor: %x\n", &valor);
    printf("Conteudo da variavel ponteiro: %x", ponteiro);
    
    getch();
    return 0;
}