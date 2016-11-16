#include<stdio.h>
#include<stdlib.h>


typedef struct Pessoa {
    int genero;
    int raca;
    int edu;
    int renda;
} Pessoa;


// protótipos
void printPessoa(Pessoa);

/**
 Cria um novo objeto do tipo pessoa com valores aleatórios
 */
Pessoa novaPessoa() {
    Pessoa p;
    p.genero = 2;
    p.raca = 1;
    p.edu = 5;
    p.renda = rand() % 10001;
    return p;
}  


// Programa principal
int main(void) {
    time_t t;
    srand((unsigned) time(&t));
    printPessoa(novaPessoa());
}


/**
 Imprimime pessoa p na tela
 */
void printPessoa(Pessoa p) {
    char genero;
    char raca[6][10] = {"preto", "pardo", "branco", "amarelo", "indigena", "???"};
    int idx = p.raca - 1;
    if (idx < 0 || idx > 4) {
        idx = 5;
    }
    
    // Seleciona genero
    if (p.genero == 1) {
        genero = 'M';
    } else if (p.genero == 2) {
        genero = 'F';
    } else {
        genero = '?';
    }
    
    printf("renda=%d, edu=%d (%c, %s)\n", p.renda, p.edu, genero, raca[idx]);
}
