#include <stdio.h>

void main(){
    int num;

    printf("0����10�܂ł̐�������͂��Ă�������:");
    scanf("%d",&num);

    if (0 <= num && num <= 10){
        printf("�����ł��B");
    }
    else{
        printf("�ԈႢ�ł��B");
    }
}