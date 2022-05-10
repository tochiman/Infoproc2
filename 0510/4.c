#include <stdio.h>

void main(){
    double height;
    double body_weight;

    printf("身長を入力してください。\n");
    scanf("%lf",&height);
    printf("体重を入力してください。\n");
    scanf("%lf",&body_weight);
    printf("身長は%lfセンチです。\n",height);
    printf("体重は%lfキロです。\n",body_weight);
}