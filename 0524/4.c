#include <stdio.h>

void main(){
    char letter;

    printf("A〜Cまでの文字を入力してください:");
    scanf("%c",&letter);

    if (letter == 'A' || letter == 'B' || letter == 'C'){
        printf("正解です。");
    }
    else{
        printf("間違いです。");
    }
}