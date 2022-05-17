#include <stdio.h>

void main(){
    double height;
    double under_side;
    double result;

    printf("三角形の高さを入力してください。\n");
    scanf("%lf",&height);
    printf("三角形の底辺を入力してください。\n");
    scanf("%lf",&under_side);

    result = (height * under_side) / 2;

    printf("三角形の面積は%lfです。",result);
}