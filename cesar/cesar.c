#include<stdio.h>

/**
 * Implementa a cifra de César.
 */
void cesar(char* texto, int n) {
    char saida[1000];
    
    for (c em texto??) {
        x = ord(c);
        if (ord('a') <= x <= ord('z')) {
            x = x + n
            x_dif = x - ord('a')
            x_new = x_dif % 26 + ord('a')
            c =  chr(x_new)
        }
        saida.append(c)
    }    
    printf(saida);
}
    
    
int main(void) {
    cesar("ave cesar!", 20);
    cesar("upy wymul!", -20);
}

