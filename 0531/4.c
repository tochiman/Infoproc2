#include <stdio.h>

void main(){
    int i,j;
    int cont;
    printf("����������Ă�:");
    scanf("%d",&cont);

    for (i = 1; i < cont;i++){
        for (j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}