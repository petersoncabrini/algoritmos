//ESTRUTURA CONDICIONAL DE SELECAO DE CASOS (SWITCH-CASE)

#include <stdio.h>
#include <conio.h> //para desenhar tela, e é para dos/windows (as funções do conio são úteis para manipular caracteres na tela, 
                   //especificar cor de carácter e de fundo.

int main(void)
{
    int valor;
    printf("Digite o codigo do aluno de 1 a 3: ");
    scanf("%d", &valor);

    switch (valor){
      case 1:
      printf("Aluno Joao \n");
      break;
      
      case 2:
      printf("Aluna Maria \n");
      break;
      
      case 3:
      printf("Aluno Jose \n");
      break;
      
      default:
      printf("Codigo invalido!!\n");
    }
    
    getch(); //O getch() como também o getche() retorna a tecla digitada, muito usado em menus com switch.(Diferença 
             //entre os dois é que o getch() não mostra a tecla que digitou na tela, já o getche() mostra na tela qual foi a tecla digitada)
    
    return (0);
}