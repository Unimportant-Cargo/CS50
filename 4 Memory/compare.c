#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (void){

    char *s = get_string("S: ");
    char *t = malloc(strlen(s)+1);
    if(t==NULL){
        return 1;
    }
    strcpy(t, s);

    if (strlen(t) > 0){
        t[0] = toupper(t[0]);

    }

    printf("%s\n", s);
    printf("%s\n", t);
    free(t);
    /*if( strcmp(s, t) == 0 ){
        printf("Same");
    }
    else if(strcmp(s, t) < 0 || strcmp(s, t) > 0){
        printf("Different");
    }
    else{
        printf("Bruh");
    }*/
}