#include<stdio.h>

int main(void) {
    char nome[100];
    int idade = -1;
    int x, y;

    // Le idade
    printf("idade: ");
    x = scanf("%d", &idade);
    while (x == 0) {
        printf("Digite numero valido!\n");
        printf("idade: ");
        scanf("%*[^\n]");
        x = scanf("%d", &idade);            
    }
        
    // Le nome
    printf("nome: ");
    y = scanf("%s", nome);

    printf("%d, %d\n", x, y);
    printf("Oi %s!\n", nome);
    printf("Em 2017 voce faz %d anos\n", idade + 1);
    
    return 0;
}








