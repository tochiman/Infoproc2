#include <stdio.h>
#define NUM 5
void main(){
    int score[NUM];
    int max;     
                                                                                                                                                                                                               
    printf("テストの点数を入力してください\n");
    for (int i = 0; i < NUM; i++){
        scanf("%d",&score[i]);
        if (score[i] >= max){
        max = score[i];
        }
    }
    for (int i = 0; i < NUM; i++){
            printf("%d番目の人の点数は%dです。\n",i+1,score[i]);
        }
    printf("最高点は%dです。",max);    
}