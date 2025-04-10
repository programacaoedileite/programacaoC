#include <stdio.h>

int main(){

    int i, j;
    //char letra;
    int num;

    for(i = 1; i <= 5; i++){

        //letra = 'A';
        num = 1;

        for(j = 1; j <= i; j++){

            /*printf("%c ", letra);
            ++letra;*/
            printf("%d ", num);
            num++;
        }

        printf("\n");

    }

    return 0;
}