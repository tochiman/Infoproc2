#include <stdio.h>

void main(){
    double num = 0;

    for (int i = 1; i <= 5; i++){
        printf("???%d??_??????????????????B",i);
        scanf("%lf",&num);
        num +=num;
        printf("%lf\n",num);
    }

    printf("5????????_????%lf????B",num/5);
}