#include <stdio.h>

void main(){
    int num;

    printf("0‚©‚ç10‚Ü‚Å‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d",&num);

    if (0 <= num && num <= 10){
        printf("³‰ğ‚Å‚·B");
    }
    else{
        printf("ŠÔˆá‚¢‚Å‚·B");
    }
}