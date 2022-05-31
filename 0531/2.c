#include <stdio.h>

void main(){
    int score;
    int sum;

    printf("テストの点数を入力してください。（0で終了）\n");
    
    for (;;){
        scanf("%d",&score);
        if (score == 0){
            printf("テストの合計点は%d点です。\n",sum);
            break;
        }
        else{
            sum += score;
            printf("%d\n",sum);
        }
    }
}