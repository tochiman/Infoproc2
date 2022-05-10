#include <stdio.h>

void main(){
    double height, body_weight;

    printf("身長と体重を入力してください。\n");
    scanf("%lf",&height);
    scanf("%lf",&body_weight);
    printf("身長は%lfセンチ：体重は%lfキロです。",height,body_weight);
}