#include<stdio.h>

int main(void) {
    int N = 362451;
    int gen[N];
    int raca[N];
    int edu[N];
    int renda[N];
    int a, b, c, d;
    
    // Lê as n entradas
    FILE* file = fopen("pnad.dat", "r");
    for (int i=0; i < N; i++) {
        fscanf(file, "%d,%d,%d,%d", &a, &b, &c, &d);
        gen[i] = a;
        raca[i] = b;
        edu[i] = c;
        renda[i] = d;
    }
    fclose(file);
    
    // Calcula media da renda
    double total = 0;
    for (int i=0; i < N; i++) {
        total += renda[i];
    }
    printf("renda media: %.2lf\n", total / N);
    
    // Menor e maior rendas
    int menor = 100000;
    int maior = 0;
    for (int i=0; i < N; i++) {
        if (renda[i] < menor && renda[i] > 0) {
            menor = renda[i];    
        }
        if (renda[i] > maior) {
            maior = renda[i];
        }
    }
    printf("menor renda: %d\n", menor);
    printf("maior renda: %d\n", maior);
}















