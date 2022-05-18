//ESTRUTURA DE REPETICAO CONDICIONAL (WHILE)

# include<stdio.h>

int main () {
    
    int contador = 1; //Declarando e inicializando a variavel de controle
    
    while (contador <= 11) { //Impondo a condicao
        printf("Hello World! \n"); //Executando um comando dentro do laco de repeticao
        contador++; //Atualizando a variavel controle com um incremento
    } 
    return 0;
}