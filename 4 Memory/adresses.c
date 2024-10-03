#include <stdio.h>
#include "cs50.h"

int main (void){
    int n = 50;
    int *p = &n;
    char *s = "cheese"; 
    printf("%p\n", p);
    printf("%i\n", *p);
    printf(s,"%c\n");
    printf("%c\n",s[0]);
    printf("%c\n",s[1]);
    printf("%c\n",s[2]);
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    // %p shows address rather than %i which would show me an integer
    //& will print out the adress the address of n, like where is it in memory
    //I feel my sanity slipping
    //String doesn't exist in C, fun. char * 
    
}