#include <stdio.h>
/*This program turn the text input into the ouput*/
main(){
    int c;
    c= getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    printf("%d",EOF);
}