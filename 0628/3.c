#include <stdio.h>

void main(void){
    char str[100];
    int result;

    printf("���������͂��Ă��������B\n");
    scanf("%s",str);
    
    for (int i=0; str[i] != '\0';i++){
        result++;        
    }

    printf("������̒�����%d�ł��B",result);
}