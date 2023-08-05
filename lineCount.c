#include <stdio.h>
/*This program count the number of lines in a text*/
main(){
    int c,ni;
    ni =0;

    while((c=getchar())!=EOF){
        if(c=='\n'){
            ++ni;
        }
            
        printf("%d\n",ni);
    }
}