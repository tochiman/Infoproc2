
//学生番号:3426
//名前：栃澤侑人

#include <stdio.h>

void main(void){
    //変数用意
    int m_0; 
    int n_0;    
    int m_1;
    int n_1;
    int lcm_1;
    int lcm_2;
    int lcm;

    //入力部
    printf("大きいほうの数値を入力してください。");
    scanf("%d",&m_0);
    int start_m = m_0;

    printf("小さいほうの数値を入力してください。");
    scanf("%d",&n_0);
    int start_n = n_0;

    for (int i=0;;i++){
        printf("m_0(%d):%d\n",i,m_0);
        printf("n_0(%d):%d\n",i,n_0);
        if (n_0 == 0){
            printf("最大公約数は「%d」です。\n",n_1);
            lcm_1 = start_m / n_1;
            lcm_2 = start_n / n_1;
            lcm = lcm_1 * lcm_2 * n_1;

            printf("最小公倍数は「%d」です。",lcm);
            break;
        }

        n_1 = m_0 % n_0;     
        printf("n_1(%d):%d\n",i,n_1);

        if (m_0 == 0){
            printf("大きい数値が「0」のため終了します。");
            break;
        }
        if (n_1 == 0){
            printf("最大公約数は「%d」です。\n",n_0);

            lcm_1 = start_m / n_0;
            printf("(%d)",lcm_1);
            lcm_2 = start_n / n_0;
            printf("(%d)",lcm_2);
            lcm = lcm_1 * lcm_2 * n_0;

            printf("最小公倍数は「%d」です。",lcm);
            break;
        }else{
            m_1 = n_0;
            n_0 = m_1 % n_1;
            printf("n_0(%d):%d\n",i,n_0);
            m_0 = n_1;
        }
    }
}