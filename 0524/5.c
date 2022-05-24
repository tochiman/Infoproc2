#include <stdio.h>

void main(){
    int grades;

    printf("成績を入力してください:");
    scanf("%d",&grades);
    printf("成績は%dです。",grades);
    
    switch (grades)
    {
    case 1:
        printf("もっと頑張りましょう。");
        break;
    case 2:
        printf("もう少し頑張りましょう。");
        break;
    case 3:
        printf("さらに上を目指しましょう。");
        break;
    case 4:
        printf("たいへんよくできました。");
        break;
    case 5:
        printf("たいへん優秀です。");
        break;
    default:
        break;
    }
}