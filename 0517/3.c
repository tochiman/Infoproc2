#include <stdio.h>

void main(){
    double height;
    double under_side;
    double result;

    printf("�O�p�`�̍�������͂��Ă��������B\n");
    scanf("%lf",&height);
    printf("�O�p�`�̒�ӂ���͂��Ă��������B\n");
    scanf("%lf",&under_side);

    result = (height * under_side) / 2;

    printf("�O�p�`�̖ʐς�%lf�ł��B",result);
}