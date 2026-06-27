#include<stdio.h>

int main(void){
    
    int nx;
    int *pt;

    nx = 57;
    pt = &nx;

    printf("nxの値=%d \n" , nx);
    printf("&nxの値= %p \n",  &nx);
    printf("ptの値= %p \n",pt );
}
