#include<stdio.h>
#include<stdlib.h>


double* push(double *ptr, int size, double elem) {
    if (size == 0) {
        ptr = malloc(sizeof(double));
        ptr[0] = elem;
        return ptr;
    } else {
        double *novo = malloc(sizeof(double) * (size + 1));
        for (int i=0; i < size; i++) {
            novo[i] = ptr[i];
        }
        novo[size] = elem;
        free(ptr);
        return novo;
    }
}

double media(double *ptr, int size) {
    double S = 0;
    for (int i=0; i < size; i++) {
        S += ptr[i];
    }
    return S / size;
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
