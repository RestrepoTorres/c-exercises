#include <stdio.h>
/*This program counts te lines, spaces and tabs in a text*/
main(){
    int c,ni;
    ni =0;

    while((c=getchar())!=EOF){
        if(c=='\n' || c=='\t'|| c==' '){
            ++ni;
        }
            
        printf("%d\n",ni);
    }
}