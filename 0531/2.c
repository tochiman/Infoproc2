#include <stdio.h>

void main(){
    int score;
    int sum;

    printf("�e�X�g�̓_������͂��Ă��������B�i0�ŏI���j\n");
    
    for (;;){
        scanf("%d",&score);
        if (score == 0){
            printf("�e�X�g�̍��v�_��%d�_�ł��B\n",sum);
            break;
        }
        else{
            sum += score;
            printf("%d\n",sum);
        }
    }
}