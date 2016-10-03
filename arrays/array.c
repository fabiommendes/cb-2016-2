#include<stdio.h>

/**
 * Imprime um array de 'size' inteiros.
 */
void print_ints(int L[], int size) {
    int i;
    
    // abre colchete
    printf("[");
    
    // imprime cada elemento da lista, exceto o ultimo
    for (i = 0; i < size - 1; i++) {
        printf("%d, ", L[i]);
    }
    
    // imprime o último caso a lista nao seja vazia
    if (size != 0) {
        printf("%d", L[size - 1]);
    }
    
    // fecha colchete
    printf("]\n");
}

int main(void) {
    int fibo_list[10];
    int idx;
    
    fibo_list[0] = 1;
    fibo_list[1] = 1;
    
    for (idx = 2; idx < 10; idx++) {
        fibo_list[idx] = fibo_list[idx - 1] + fibo_list[idx - 2];
    }
    
    print_ints(fibo_list, 10);
}
