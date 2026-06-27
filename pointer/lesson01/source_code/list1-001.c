#include<stdio.h>

int main(void){

    int nx = 15;
    int ny = 73;

    printf("nxの値=%d\n",nx);
    printf("nyの値=%d \n",ny);

    printf("nxのアドレス= %p \n " , &nx);
    printf("nyのアドレス= %p \n " , &ny);

    return(0);
}
