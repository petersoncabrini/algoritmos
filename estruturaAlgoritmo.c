
//  ESTRUTURA DE UM ALGORITMO DA LINGUAGEM C
// Definicao de bibliotecas
// Inicio do programa
// Inicio das funcoes
//     Declaracao das variaveis
//     Instrucao
// Termino das funcoes

//Biblioteca utilizada para imprimir uma mensagem na tela com o printf(), alem de outros comandos: scanf(), fgets().
#include <stdio.h>; 

// main() {} 
// int main () {} -> significa que retornara um numero do tipo inteiro
// void main () {} -> esta é uma função sem retorno, ou seja, não recebe nenhum argumento.

//inicializacao do programa atraves da funcao main() {}
int main(){ 

    //Declaracao das variaveis
    // Tipos mais usados:
    // int -> armazena os números inteiros (negativos ou positivos). Em linguagem C é definida por “int”, em algoritmos é definida por “inteiro”.
    // real -> permite armazenar valores de pontos flutuantes e com frações. Em linguagem C é definido por “float”.
    // caractere -> caracteriza os caracteres, números e símbolos especiais. São delimitadas por aspas simples (‘). Em linguagem C é definida por “char”.
    int idade1 = 0;
    int idade2 = 0;
    int sum = 0;

    // A função printf () é um comando de saída que possui um vínculo com a biblioteca stdio.h. É utilizada quando se pretende obter uma resposta na tela do computador.
    printf("Digite a primeira idade: ");

    // A função scanf() é um comando de entrada. São informações que possibilitam a entrada de dados pelo teclado e será armazenada em um determinado espaço da memória.
    // O “&” é utilizado na função scanf() na lista de argumentos, sua função é retornar o conteúdo da variável, ou seja, retorna o endereço do operando.
    scanf("%d", &idade1);
    printf("Digite a segunda idade: ");
    scanf("%d", &idade2);
        sum = idade1 + idade2;
    printf("Resultado = %d", sum);

    // indica que o processo está voltando para o Sistema Operacional
    return 0;
    
} // fim de uma função ou de um programa