#include <stdio.h>
int main(void){
    printf("char型は%uバイトです\n",(unsigned)sizeof(char));
    printf("int型は%uバイトです\n",(unsigned)sizeof(int));
    printf("long型は%luバイトです\n",(unsigned long)sizeof(long));

    return(0);
}
