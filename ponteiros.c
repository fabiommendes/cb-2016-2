// livreluan@gmail.com
// tallysmartins@gmail.com
#include<stdio.h>

void change_int(int x) {
    x = 41;
    printf("new x: %d\n", x);
}

void change_value(int* p) {
    *p = 41;
}



int main(void) {
    int x=1, y=2;
    change_value(&y);
    change_int(x);
    int z = x + y;          
    printf("z: %d\n", z);
}
