#include <stdio.h>
#define NUM 5

void main(){                                                                                                                                                                                                                              5         int score[NUM];
    int num ;
    printf("テストの点数を入力してください\n");

    for (int i = 0; i < NUM; i++){
        scanf("%d",&score[i]);
        if (score[i] >= 70){
            num++;
        }
    }
    for (int i = 0; i < NUM; i++){
        printf("%d番目の人の点数は%dです。\n",i+1,score[i]);
    }
    printf("70点以上の学生は%d人です。\n",num);
}