#include <stdio.h>

void main(){
    int num1;
    int num2;

    printf("2つの整数を入力してください:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if (num1 < num2){
        printf("%dは%dより大きい値です。",num2,num1);
    }
    else if (num1 > num2){
        printf("%dは%dより大きい値です。",num1,num2);
    }
    else{
        printf("2つの数は同じ値です。");
    }
}