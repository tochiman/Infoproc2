#include <stdio.h>

void main(){
    printf("1~10までの偶数を出力します。\n");

    for (int i=2;i<=10;i+=2){
        printf("%d\n",i);
    }
}