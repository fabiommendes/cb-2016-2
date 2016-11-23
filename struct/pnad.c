#include<stdio.h>
#include<stdlib.h>
#include "funcoes.c"


// Programa principal
int main(void) {
    time_t t;
    srand((unsigned) time(&t));
    printPessoa(novaPessoa());
}

