# pointerの基本
### pointerとは
- オブジェクトとアドレス
- アドレス演算子

<details>
<summary><a href=./source_code/list1-001.c<b>list1-001></b> (クリックでコードを展開)</summary>

```c
#include<stdio.h>                                                                                                                                                                     
int main(void){                                                                                                                                                                       
    int nx = 15; 
    int ny = 73;                                                                                                                                                                      
    printf("nyの値=%d \n",ny);                                                                                                                                                        
    printf("nxのアドレス= %p \n " , &nx);                                                                                                                                             
    printf("nyのアドレス= %p \n " , &ny);                                                                                                                                             
    return(0);                                                                                                                                                                        
}        
```

</details>

### 関数呼び出しとpointer
