#include <stdio.h>

void main(){
    int num;

    printf("0から10までの整数を入力してください:");
    scanf("%d",&num);

    if (0 <= num && num <= 10){
        printf("正解です。");
    }
    else{
        printf("間違いです。");
    }
}