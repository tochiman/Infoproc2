
//�w���ԍ�:3426
//���O�F���V�Аl

#include <stdio.h>

void main(void){
    //�ϐ��p��
    int m_0; 
    int n_0;    
    int m_1;
    int n_1;
    int lcm_1;
    int lcm_2;
    int lcm;

    //���͕�
    printf("�傫���ق��̐��l����͂��Ă��������B");
    scanf("%d",&m_0);
    int start_m = m_0;

    printf("�������ق��̐��l����͂��Ă��������B");
    scanf("%d",&n_0);
    int start_n = n_0;

    for (int i=0;;i++){
        printf("m_0(%d):%d\n",i,m_0);
        printf("n_0(%d):%d\n",i,n_0);
        if (n_0 == 0){
            printf("�ő���񐔂́u%d�v�ł��B\n",n_1);
            lcm_1 = start_m / n_1;
            lcm_2 = start_n / n_1;
            lcm = lcm_1 * lcm_2 * n_1;

            printf("�ŏ����{���́u%d�v�ł��B",lcm);
            break;
        }

        n_1 = m_0 % n_0;     
        printf("n_1(%d):%d\n",i,n_1);

        if (m_0 == 0){
            printf("�傫�����l���u0�v�̂��ߏI�����܂��B");
            break;
        }
        if (n_1 == 0){
            printf("�ő���񐔂́u%d�v�ł��B\n",n_0);

            lcm_1 = start_m / n_0;
            printf("(%d)",lcm_1);
            lcm_2 = start_n / n_0;
            printf("(%d)",lcm_2);
            lcm = lcm_1 * lcm_2 * n_0;

            printf("�ŏ����{���́u%d�v�ł��B",lcm);
            break;
        }else{
            m_1 = n_0;
            n_0 = m_1 % n_1;
            printf("n_0(%d):%d\n",i,n_0);
            m_0 = n_1;
        }
    }
}