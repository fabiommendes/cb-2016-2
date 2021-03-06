#include<stdio.h>
#include<stdlib.h>
#include<math.h>


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
    double S = 0;
    double med = media(ptr, size);
    for (int i=0; i < size; i++) {
        S += (ptr[i] - med) * (ptr[i] - med);
    }
    return sqrt(S / (size - 1));
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
    printf("desvpad: %lf\n", desvpad(lista_ptr, size));
    printf("desvpad media: %lf\n", desvpad(lista_ptr, size) / sqrt(size));
}
