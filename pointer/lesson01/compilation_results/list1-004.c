#include<stdio.h>

int main(void){
    
    int nx,ny; 
    int *p;
    

    p = &nx; /*pにnxのアドレスを代入：pxはnxを指す*/
    *p = 100; /*pが指すnxに100を代入*/
    
    p = &ny; /* pにnyのアドレスを代入*/
    *p = 300; /*pが指すnyに300代入*/


    printf("nxの値=%d \n" , nx);
    printf("ptの値= %d \n", ny );

    return(0);
}
