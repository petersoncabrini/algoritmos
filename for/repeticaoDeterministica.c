//ESTRUTURA REPETICAO DETERMINISTICA

#include<stdio.h>

int main (){
    
    int x,y;
    for (x = 10, y = 0; x >= 0, y <= 10; x--, y++) { // for (variavel; condicao; incremento/decremento)
        printf("x=%2d, y=%2d \n", x,y);
    }
    return 0;
}