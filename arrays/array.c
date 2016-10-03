#include<stdio.h>
#include "array_util.h"

int  sum_ints(int L[], int size) {
    int i;
    int S = 0;
  
    for (i = 0; i < size; i++) {
        S = S + L[i];
    }
    
    return S;
}
int main(void) {
    int fibo_list[10];
    int idx;
    int S;
    
    fibo_list[0] = 1;
    fibo_list[1] = 1;
    
    for (idx = 2; idx < 10; idx++) {
        fibo_list[idx] = fibo_list[idx - 1] + fibo_list[idx - 2];
    }
    
    print_ints(fibo_list, 10);
    S = sum_ints(fibo_list, 10);
    printf("soma: %d\n", S);
}
