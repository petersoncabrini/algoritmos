//ESTRUTURA REPETICAO DETERMINISTICA - Progressao Geometrica

#include<stdio.h>

int main (){
    int a1, r, n, i;
    
    printf("\nDigite o primeiro termo, a razao e quantos termos voce deseja (PG): \n");
    scanf("%d%d%d", &a1, &r, &n);
    
    for (i=1; i < n; i++){
        printf("\n\n%d\n", (a1 = a1 * r));
    }
    return 0;
}