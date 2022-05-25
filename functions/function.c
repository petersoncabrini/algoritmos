#include <stdio.h>

// Declaracao da funcao, com o seu tipo (inteiro)
int somar () {
    return 2 + 3;
}

// Funcao Principal
int main(){
    int resultado = 0;
    resultado = somar ();
    printf("O resultado da funcao e = %d", resultado);
    return 0;
}