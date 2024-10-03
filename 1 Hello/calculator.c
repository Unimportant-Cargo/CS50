#include "cs50.h"
#include <stdio.h>
int add(int a, int b);

int main(void){
    int x = get_int("Enter x: \n");
    int y = get_int("Enter y: \n");
    int z = add(x, y);
    printf("%i\n", z);
}
int add(int a, int b){
    return a + b;
}