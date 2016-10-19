#include<stdio.h>

int main(void) {
    int idades[10];
    double alturas[10];
    int N;
    FILE* file = fopen("dados.txt", "r");
    
    // Numero de entradas
    printf("N: ");
    fscanf(file, "%d", &N);
    
    // Lê as n entradas
    for (int i=0; i < N; i++) {
        fscanf(file, "%d", &idades[i]);
        fscanf(file, "%lf", &alturas[i]);
    }
    fclose(file);
    
    // Calcula media de alturas
    double altura_total=0, idade_total=0;
    for (int i=0; i < N; i++) {
        altura_total += alturas[i];
        idade_total += idades[i];
    }
    
    //ATIVIDADE: grave estas medias no arquivo out.txt!
    printf("altura: %lf\n", altura_total/N);
    printf("idade: %lf\n", idade_total/N);
}
