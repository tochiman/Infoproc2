#include <stdio.h>

void main(){
    int num;
    printf("��������͂��Ă�������:");
    scanf("%d",&num);

    if (num / 2 == 0)
    {
        printf("%d�͊�ł��B",num);
    }
    else{
        printf("%d�͋����ł��B",num);
    }
}