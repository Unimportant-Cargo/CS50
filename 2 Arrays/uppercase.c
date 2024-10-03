#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main (void){
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0 , n = strlen(s) ; i < n ; i++){
        //if lowercase(-32 because between any upper and lowercase is always 32 in ASCII)
        if (s[i] >= 'a'&& s[i] <= 'z'){
            //printf("%c", s[i]-32);
            printf("%c", toupper(s[i]));

        }
        else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
}