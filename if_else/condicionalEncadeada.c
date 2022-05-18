//ESTRUTURA CONDICIONAL ENCADEADA (IFS ANINHADOS)

# include<stdio.h>

int main () {
    
    float compras, desconto, taxa, total;
    
    compras = 3000;
    
    if (compras <= 2000) {
        taxa = 0.1;
    } else {
        if (compras <= 3000) {
            taxa = 0.05;
        } else {
            if (compras <= 5000){
                taxa = 0.03;
            } else {
                taxa = 0.02;
            }
        }
    }
    
    desconto = compras * taxa;
    total = compras - desconto;
    printf("O seu desconto foi de %0.2f e voce ira pagar %0.2f reais.", desconto, total);
}