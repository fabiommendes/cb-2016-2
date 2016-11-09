#include<stdio.h>


int valor(char letra) {
    if (letra >= 'a' && letra <= 'k') {
        return letra - 'a' + 1;
    }
    else if (letra >= 'k' && letra <= 'u') {
        return 11 * (letra - 'k' + 1);
    }
    else if (letra >= 'u' && letra <= 'z') {
        return 121 * (letra - 'u' + 1);
    }
    else {
        return 0;
    }
}

int besta(char* nome) {
    int S = 0;
    while (*nome != '\x00') {
        S += valor(*nome);
        nome++;
    }
    return S;
}

int main(void) {
    char nome[200];
    
    for (int i=1; i <= 10; i++) {
        printf("%d: ", &i);   
    }
    
    
    printf("nome: ");
    scanf("%[^\n]", nome);
    printf("numero: %d\n", besta(nome));
}

