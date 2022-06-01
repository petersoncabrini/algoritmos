# include <stdio.h>
# include <stdlib.h>

// Estrutura base do no
struct node {
    int nData;
    struct node *pLink;
}

// Funcao para printar o no na tela
displayLL(struct node *p){
    printf("Exibindo a lista:\n");
    if (p) {
        do {
            printf(" %d", p->nData);
            p = p->pLink;
        } while (p);
    } else
        printf ("Lista Vazia");
}

// Estrutura da Funcao Principal

int main (void){

    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;
    
// Criando os nos e associando aos dados
    
    pNode1 = (struct node*) malloc(sizeof(struct node*));
    pNode1->nData = 10;
    
    pNode2 = (struct node*) malloc(sizeof(struct node*));
    pNode2->nData = 20;
    
    pNode3 = (struct node*) malloc(sizeof(struct node*));
    pNode3->nData = 30;
    
// Conectando os nos

    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;
    pNode3->pLink = NULL;
    
// Exibindo a Lista

    if (pNode1)
        displayLL(pNode1);
    
}