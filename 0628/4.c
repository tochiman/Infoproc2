#include <stdio.h>

void main(void){
    char str[100];
    int result;

    printf("���������͂��Ă��������B\n");
    scanf("%s",str);

    for(int i=0; str[i] != '\0'; i++){
        if (str[i] == 'a'){
            result++;
        }
    }

    printf("%s�̒���a��%d����܂��B",str,result);
}