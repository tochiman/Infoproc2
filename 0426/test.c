#include <stdio.h>

void main(void){
    int num;

    printf_s("“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &num);

    for (int i=1; i<= num; i++){
        for (int j=1; j <= num; j++){
            for (int k=1; k <= num; k++){
                printf("\t%d\t%d\t%d\n",i,j,k);
            }
        }
    }
}