#include <stdio.h>

void main(void){
    char str[100];
    
    printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s",str);

    for (int i=0; str[i] != '\0';i++){
        if (str[i] == 'a'){
            str[i] = 'b';
        }
    }

    printf("%s‚É’u‚«Š·‚¦‚Ü‚µ‚½",str);
}