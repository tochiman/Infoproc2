#include <stdio.h>

void main(){
    char letter;

    printf("A�`C�܂ł̕�������͂��Ă�������:");
    scanf("%c",&letter);

    if (letter == 'A' || letter == 'B' || letter == 'C'){
        printf("�����ł��B");
    }
    else{
        printf("�ԈႢ�ł��B");
    }
}