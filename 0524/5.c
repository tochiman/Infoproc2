#include <stdio.h>

void main(){
    int grades;

    printf("���т���͂��Ă�������:");
    scanf("%d",&grades);
    printf("���т�%d�ł��B",grades);
    
    switch (grades)
    {
    case 1:
        printf("�����Ɗ撣��܂��傤�B");
        break;
    case 2:
        printf("���������撣��܂��傤�B");
        break;
    case 3:
        printf("����ɏ��ڎw���܂��傤�B");
        break;
    case 4:
        printf("�����ւ�悭�ł��܂����B");
        break;
    case 5:
        printf("�����ւ�D�G�ł��B");
        break;
    default:
        break;
    }
}