#include <stdio.h>
#include<conio.h>

// Declarando a funcao multiplica, que recebe como parametros os valos inteiros N1 e N2 e retorna um inteiro.
int multiplica (int N1, int N2){
    int resultado;
    resultado = N1 * N2;
    return (resultado);
}

// Funcao Principal

int main (void){
    int V1, V2, resultado;
    printf("Digite o primeiro valor:");
    scanf("%d", &V1);
    printf("Digite o segundo valor:");
    scanf("%d", &V2);
    
// Chamando a Funcao
    resultado = multiplica(V1, V2);
    // \n para pular linha
    printf("Resultado = %d\n", resultado);
    
    // system pause
    getch();
    return 0;
}