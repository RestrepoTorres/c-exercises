#include <stdio.h>
/*This program count the number of characters in a text*/
main(){
    long nc;
    nc =0;
    while(getchar()!=EOF){
        ++nc;
        printf("%ld\n",nc);
    }

}