//ESTRUTURA REPETICAO DETERMINISTICA COM VETORES (ARRAYS)

#include<stdio.h>
#include<stdlib.h>
int main  () {
    int i, v[5];
    //capturando os elementos
    for (i=0; i <5; i++) {
        printf("Elemento[%d]= ", i);
        scanf("%d", &v[i]);
    }
    //exibindo os valores originais
    printf("\n Valores Originais \n");
    for (i=0; i<5; i++)
    printf("%d\n", v[i]);
    //exibindo os valores na ordem inversa
    printf("\n Valores na ordem inversa \n");
    for (i=4; i>=0; i--)
    printf("%d\n", v[i]);
    return 0;
}