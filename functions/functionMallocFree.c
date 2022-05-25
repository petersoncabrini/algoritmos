#include <stdio.h>
#include<conio.h>
#include<stdlib.h> //necessaria para usar as funcoes malloc() e free()

// Funcao Principal
int main(void){
    float *v; //declarando o ponteiro
    int i, numComponentes;
    
    printf("Informe o numero de componentes do vetor\n");
    scanf("%d", &numComponentes);
    
    v = (float *) malloc(numComponentes * sizeof(float));
    
    // armazenando os dados em um vetor
    for (i=0; i < numComponentes; i++){
        printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f", &v[i]);
    }
    
    // percorrendo o valor e imprimindo os valores
    printf("\n****** Valores do vetor dinamico ******\n\n");
    for (i=0; i<numComponentes;i++){
        printf("%.2f\n", v[i]);
    }
    
    // liberando o espaco de memoria alocado
    free(v);
    
    getch();
    return 0;
}