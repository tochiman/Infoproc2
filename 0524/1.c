#include <stdio.h>

void main(){
    int num;
    printf("整数を入力してください:");
    scanf("%d",&num);

    if (num / 2 == 0)
    {
        printf("%dは奇数です。",num);
    }
    else{
        printf("%dは偶数です。",num);
    }
}