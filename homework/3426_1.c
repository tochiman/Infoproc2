/*
�w���ԍ�:3426
���O�F���V�Аl

�`���s���ʁ`

�`�l�@�`
*/
#include <stdio.h>

void main(void){
    //�ϐ��p��
    int m_0;    //�傫�����l�p
    int n_0;    //���������l�p
    int m_1;
    int n_1;
    int lcm;
    int lcm_1;
    int lcm_2;
    int confirm;

    //���͕�
    printf("�傫���ق��̐��l����͂��Ă��������B");
    scanf("%d",&m_0);
    printf("�������ق��̐��l����͂��Ă��������B");
    scanf("%d",&n_0);

    for (int i=0;;i++){
        confirm = n_1 = m_0 % n_0;     //����؂�邩�m�F�i�]��̗L�薳���j
        //�傫�����l��0�̏ꍇ�I��
        if (m_0 == 0){
            printf("�傫�����l���u0�v�̂��ߏI�����܂��B");
            break;
        }

        //������result�ϐ���0�ŗ]�肪�Ȃ��̂ł���΁An_0���o�͂��ďI������B
        if (confirm == 0){
            printf("�ő���񐔂́u%d�v�ł��B\n",n_0);
            //�ŏ����{�������߂�
            // printf("%d",m_0); 12707
            lcm_1 = m_0 / n_0;
            lcm_2 = m_1 / n_0;
            printf("%d\n",m_1);
            lcm = lcm_1 * lcm_2 * n_0;
            printf("�ŏ����{���́u%d�v�ł��B",lcm);
            break;
        }else{
        //�ő���񐔂����߂�
            m_1 = n_0;
            n_0 = m_1 % n_1;
            if (n_0 == 0){
                printf("�ő���񐔂́u%d�v�ł��B\n",n_1);
                lcm_1 = m_0 / n_0;
                lcm_2 = m_1 / n_0;
                printf("%d\n",m_1);
                lcm = lcm_1 * lcm_2 * n_0;
                printf("�ŏ����{���́u%d�v�ł��B",lcm);
                break;
            }
        }
    }
}