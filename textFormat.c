#include <stdio.h>
/*this program deletes the extras blank spaces*/
main(){
    int c;
    int previous = -17;

    while((c= getchar())!= EOF){
        if (c == ' ' && previous == ' '){

        }
        else{
            putchar(c);
        }
        previous = c;
    }
    printf("%d",EOF);
}