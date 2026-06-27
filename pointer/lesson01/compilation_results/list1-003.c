#include<stdio.h>

int main(void){
    
    int nx;
    int *pt;

    nx = 57;
    pt = &nx;

    printf("nxの値=%d \n" , nx);
    printf("ptの値= %d \n", *pt );
}
