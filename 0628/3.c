#include <stdio.h>

void main(void){
    char str[100];
    int result;

    printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s",str);
    
    for (int i=0; str[i] != '\0';i++){
        result++;        
    }

    printf("•¶š—ñ‚Ì’·‚³‚Í%d‚Å‚·B",result);
}