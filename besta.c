#include<stdio.h>


int abs(int x) {
    if (x >= 0) {
        return x;
    }
    else {
        return -x;
    }
}

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
    int nums[10];
    int valor = 0, diff=1000;
    
    for (int i=1; i <= 10; i++) {
        scanf("%s", nome);
        nums[i] = besta(nome);
    }
    
    // Duplas de palavras
    /*
    for (int i=0; i<10; i++) {
        for (int j=i; j<10; j++) {
            valor = nums[i] + nums[j];
            if (abs(valor - 666) < diff) {
                diff = abs(valor - 666);
                printf("%d %d -> %d\n", i, j, valor);
            }
        }
    }*/
    
    // Trincas de palavras
    for (int i=0; i<10; i++) {
        for (int j=i; j<10; j++) {
            for (int k=j; k<10; k++) {
                valor = nums[i] + nums[j] + nums[k];
                if (abs(valor - 666) < diff) {
                    diff = abs(valor - 666);
                    printf("%d %d %d -> %d\n", i, j, k, valor);
                }
            }
        }
    }
    
    
    printf("nome: ");
    scanf("%[^\n]", nome);
    printf("numero: %d\n", besta(nome));
}

