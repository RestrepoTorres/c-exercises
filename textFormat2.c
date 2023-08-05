#include <stdio.h>
/*This program makes explicit the \t \b and \\ in a text*/
main(){
    int c;
    c= getchar();
    while(c != EOF){
        if (c != '\t' && c != '\b' &&c != '\\' ){
            putchar(c);
        }else{
            if(c == '\t'){
                putchar('\\');
                putchar('t');
            }
            if(c == '\b'){
                putchar('\\');
                putchar('b');
            }
            if(c == '\\'){
                putchar('\\');
                putchar('\\');
            }
        }
        c = getchar();
    }
    printf("%d",EOF);
}