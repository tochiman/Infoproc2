#include <stdio.h>

void main(){
    int a;
    printf("整数を入力してください。\n");
    scanf("%d",&a);
    printf("正負を反転すると%dです。\n",-a);
}