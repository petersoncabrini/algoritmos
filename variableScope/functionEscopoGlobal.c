#include<stdio.h>

// // Para acessar uma variavel global dentro de um escopo da funcao que ja possui a mesma variavel declarada, podemos usar o extern!
// Ex:
// // variavel x declarada no escopo global
// int x = 15;

// int main (){
//     // variavel x declarada no escopo local (function)
//     int x = -1;
//     int b;
//     {extern int x; b = x;}
//     printf("\n Valor de x = %d", x);
//     printf("\n Valor de x global (b) = %d", b);
//     return 0;
// }

// declaranco a funcao no escopo GLOBAL
int x = 10;

// declarando a funcao testar
int testar(){
    return 2*x;
}

// declarando a funcao principal
int main() {
    printf("\n Valor de x global = %d", x);
    printf("\n Valor de x global, alterado na funcao testar() = %d", testar());
    return 0;
}