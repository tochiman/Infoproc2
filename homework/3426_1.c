/*
学生番号:3426
名前：栃澤侑人

～実行結果～

～考察～
*/
#include <stdio.h>

void main(void){
    //変数用意
    int m_0;    //大きい数値用
    int n_0;    //小さい数値用
    int m_1;
    int n_1;
    int lcm;
    int lcm_1;
    int lcm_2;
    int confirm;

    //入力部
    printf("大きいほうの数値を入力してください。");
    scanf("%d",&m_0);
    printf("小さいほうの数値を入力してください。");
    scanf("%d",&n_0);

    for (int i=0;;i++){
        confirm = n_1 = m_0 % n_0;     //割り切れるか確認（余りの有り無し）
        //大きい数値が0の場合終了
        if (m_0 == 0){
            printf("大きい数値が「0」のため終了します。");
            break;
        }

        //もしもresult変数が0で余りがないのであれば、n_0を出力して終了する。
        if (confirm == 0){
            printf("最大公約数は「%d」です。\n",n_0);
            //最小公倍数を求める
            // printf("%d",m_0); 12707
            lcm_1 = m_0 / n_0;
            lcm_2 = m_1 / n_0;
            printf("%d\n",m_1);
            lcm = lcm_1 * lcm_2 * n_0;
            printf("最小公倍数は「%d」です。",lcm);
            break;
        }else{
        //最大公約数を求める
            m_1 = n_0;
            n_0 = m_1 % n_1;
            if (n_0 == 0){
                printf("最大公約数は「%d」です。\n",n_1);
                lcm_1 = m_0 / n_0;
                lcm_2 = m_1 / n_0;
                printf("%d\n",m_1);
                lcm = lcm_1 * lcm_2 * n_0;
                printf("最小公倍数は「%d」です。",lcm);
                break;
            }
        }
    }
}