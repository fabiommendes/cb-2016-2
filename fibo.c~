#include<stdio.h>

// Retorna o n-ésimo # de Fibonacci.
double fibo(int n) {
    double x = 1, y = 1, z;
    
    int i = 1;
    while (i <= n - 1) { 
        z = y;
        y = x + y;
        x = z;
        i = i + 1;
    }
    return y;
}

int main(void) { 
    int m;
    printf("m: ");
    scanf("%i", &m);
       
    int n = 0;
    while (n <= m) {
        printf("%lf\n", fibo(n));
        n = n + 1;
    }
    return 0;
}
