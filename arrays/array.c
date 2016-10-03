#include<stdio.h>
#include "array_util.h"

int main(void) {
    int fibo_list[10];
    int idx;
    
    fibo_list[0] = 1;
    fibo_list[1] = 1;
    
    for (idx = 2; idx < 10; idx++) {
        fibo_list[idx] = fibo_list[idx - 1] + fibo_list[idx - 2];
    }
    
    print_ints(fibo_list, 10);
}
