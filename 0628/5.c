#include <stdio.h>

void main(void){
    char str[100];
    
    printf("���������͂��Ă��������B\n");
    scanf("%s",str);

    for (int i=0; str[i] != '\0';i++){
        if (str[i] == 'a'){
            str[i] = 'b';
        }
    }

    printf("%s�ɒu�������܂���",str);
}