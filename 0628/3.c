#include <stdio.h>

void main(void){
    char str[100];
    int result;

    printf("文字列を入力してください。\n");
    scanf("%s",str);
    
    for (int i=0; str[i] != '\0';i++){
        result++;        
    }

    printf("文字列の長さは%dです。",result);
}