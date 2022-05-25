#include<stdio.h>
#include<conio.h>

// declaracao de variaveis globais
float media, nota1, nota2;

// prototipo da funcao entrada
void entrada(void);

// funcao principal
int main (void){
    //variavel local
    char resposta;
    
    do {
        //chamada da funcao p/ entrada das notas
        entrada();
        
        //usando variaveis globais: media, nota1 e nota2
        media = (nota1 + nota2) / 2;
        printf("\nMedia do aluno: %.2f\n", media);
        printf("\nDeseja calcular outra media? (s/n)");
        fflush(stdin);
        scanf("%c", &resposta);
    } 
    
    while (resposta == 's');
    
    return (0);    

} // fim da funcao principal

void entrada (void){
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    return;
}