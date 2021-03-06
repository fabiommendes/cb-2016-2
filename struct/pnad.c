#include<stdio.h>
#include<stdlib.h>
#include "funcoes.c"


Pessoa* le_pnad() {
    Pessoa* lista_pessoas = malloc(362451 * sizeof(Pessoa));
    FILE* f = fopen("pnad.dat", "r");
    int i, a, b, c, d;
    
    for (i=0; i<362451; i++) {
        fscanf(f, "%d,%d,%d,%d", &a, &b, &c, &d);
        lista_pessoas[i].genero = a;
        lista_pessoas[i].raca = b;
        lista_pessoas[i].edu = c;
        lista_pessoas[i].renda = d;
    } 
    
    fclose(f);
    return lista_pessoas;  
}


double media_filtrada(Pessoa* L, int edu, int raca) {
    double total = 0;
    int n = 0;
    int i;
    
    for (i=0; i<362451; i++){
        if (L->renda != 0 && L->edu == edu && L->raca == raca) {
            total += L->renda;
            n++;
        }
        L++;
    }
    return total / n;    
}


int main(void) {
    int edu, raca;
    double renda;
    Pessoa* L = le_pnad();
    printf("escolaridade: ");
    scanf("%d", &edu);
    printf("raca: ");
    scanf("%d", &raca);
    renda = media_filtrada(L, edu, raca);
    printf("renda media: %lf\n", renda);
}

