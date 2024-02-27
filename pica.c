#include <stdio.h>

int main(void){
    int c, count = 0;
    char word[100];
    while((c = getchar()) != EOF){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            while((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                word[count] = c;
                count++;
                c = getchar();
            } 
            word[count] = '\0';
            count = 0;
            printf("pica%s ",word);
        }
        else
            putchar(c);
    }
    return 0;
}