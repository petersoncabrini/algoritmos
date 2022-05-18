//ESTRUTURA DE REPETICAO CONDICIONAL (WHILE)

# include<stdio.h>

int main () {
    
    int tabuada, contador = 1, num; //Declarando as variaveis e o contador

    printf("Digite um numero: \n");
    scanf("%d", &num);
    
    while (contador <= 10) { //Impondo a condicao
        tabuada = num * contador;
        printf("%d x %d = %d\n", num, contador, tabuada);
        contador++; //Atualizando a variavel controle com um incremento
    } 
    return 0;
}