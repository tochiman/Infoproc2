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

    printf("1�Ԗڂ̐�������͂��Ă��������B\n");
    scanf("%d",&num1);
    printf("2�Ԗڂ̐�������͂��Ă��������B\n");
    scanf("%d",&num2);
    min_num = min(num1,num2);
    printf("�ŏ��l��%d�ł��B",min_num);
}