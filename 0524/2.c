#include <stdio.h>

void main(){
    int num1;
    int num2;

    printf("2�̐�������͂��Ă�������:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if (num1 < num2){
        printf("%d��%d���傫���l�ł��B",num2,num1);
    }
    else if (num1 > num2){
        printf("%d��%d���傫���l�ł��B",num1,num2);
    }
    else{
        printf("2�̐��͓����l�ł��B");
    }
}