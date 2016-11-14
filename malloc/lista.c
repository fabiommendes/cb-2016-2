#include<stdio.h>
#include<stdlib.h>


double* push(double *ptr, int size, double elem) {
    if (size == 0) {
        ptr = malloc(sizeof(double));
        ptr[0] = elem;
        return ptr;
    } else {
        // Aloca espaco para size + 1 elementos
        double *novo = malloc(sizeof(double) * (size + 1));
        
        // Copia valores para a nova região de memória
        for (int i=0; i < size; i++) {
            novo[i] = ptr[i];
        }
        
        // Acrescenta último elemento
        novo[size] = elem;
        
        // Libera antiga região de memória
        free(ptr);
        
        return novo;
    }
}

/**
 * Calcula a media dos termos de uma lista com size elementos
 */
double media(double *ptr, int size) {
    double S = 0;
    for (int i=0; i < size; i++) {
        S += ptr[i];
    }
    return S / size;
}


/**
 * Calcula o desvio padrão dos termos de uma lista com size 
 * elementos
 */
double desvpad(double *ptr, int size) {
    // ...
}

int main(void) {
    double *lista_ptr = NULL;
    double num;
    int size = 0;
    
    while (1) {
        if (scanf("%lf", &num) == 0) {
            break;
        } else {
            lista_ptr = push(lista_ptr, size, num);
            size++;
        }    
    } 
    
    printf("media: %lf\n", media(lista_ptr, size));
}
