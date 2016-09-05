#include<stdio.h>

int main(void) {
    double a, b, resultado;
    char op;
    
    printf("expr: ");
    scanf("%lf %c %lf", &a, &op, &b);
    
    if (op == '+') resultado = a + b;
    else if (op == '-') resultado = a - b;
    else if (op == '*') resultado = a * b;
    else if (op == '/') resultado = a / b;
    else {
        printf("operacao invalida\n");
        return 1;
    }
    
    printf("%lf\n", resultado);
    return 0;
}

