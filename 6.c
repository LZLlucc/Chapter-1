#include <stdio.h>

int main(){
lable1:
    while(1){
        printf("ok/n");
        break;
    }
    
    while (1)
    {
    goto lable1;
    break;
    }
    

    return 0;
}