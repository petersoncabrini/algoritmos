//ESTRUTURA DE REPETICAO CONDICIONAL (WHILE)

# include<stdio.h>

int main (void) {
    
    int contador = 1; //Declarando e inicializando a variavel de controle
    
    while (contador <= 10) { //Impondo a condicao
        printf("%d ", contador); //Executando um comando dentro do laco de repeticao
        contador++; //Atualizando a variavel controle com um incremento
    } 
    return 0;
}