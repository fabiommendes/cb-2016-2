#include<stdio.h>
#include<stdlib.h>


typedef struct Pessoa {
    int genero;
    int raca;
    int edu;
    int renda;
} Pessoa;


/**
 Imprimime pessoa p na tela
 */
void printPessoa(Pessoa p) {

}


/**
 Cria um novo objeto do tipo pessoa com valores aleatórios
 */
Pessoa novaPessoa() {
    Pessoa p;
    return p;
}

// Programa principal
int main(void) {
    Pessoa p = {
        .genero=1, 
        .raca=3, 
        .edu=10, 
        .renda=1000
    };
    
    printPessoa(p);
}
