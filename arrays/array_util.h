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
