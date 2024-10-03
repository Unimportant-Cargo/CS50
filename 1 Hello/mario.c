#include "cs50.h"
#include<stdio.h>

/*int main(void){
     int n = get_int("Wall size? ");
     while(n<1){
        n = get_int("Size can't be less than 1, choose again ");
     }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            printf("#");
        }
        printf("\n");
    }
}*/
int main(void){
    int n;
    do{
        n = get_int("Wall size? ");
    }
    while( n < 1);

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n ; j++){

            printf("#");
        }
        printf("\n");
    }
}