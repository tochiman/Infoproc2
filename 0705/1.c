#include <stdio.h>

int min(int x, int y){
    if (x > y){
        return y;
    }else{
        return x;
    }
}

int main(void){
    int num1,num2,min_num;

    printf("1番目の整数を入力してください。\n");
    scanf("%d",&num1);
    printf("2番目の整数を入力してください。\n");
    scanf("%d",&num2);
    min_num = min(num1,num2);
    printf("最小値は%dです。",min_num);
}