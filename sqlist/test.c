#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 128

typedef struct{
    int data[N];
    int last;
}sqlist, *sqlink;



sqlink list_creat();

int main(){

    printf("%d\n",128 * 4 + 4);
    printf("%zu\n",sizeof(sqlist));  //516  

    sqlink L = list_creat();
    
    printf("%d\n", L->last);
    printf("%zd\n", sizeof(L));

    L->data[0] = 1;
    L->data[1] = 2;
    L->last = 1;
    printf("%zd\n", sizeof(L));
    for(int i = 0; i <= L->last; i++){
        printf("%d\n", L->data[i]);
    }
    return 0;

}


sqlink list_creat(){
    sqlink L;

    //malloc

    L = (sqlink)malloc(sizeof(sqlist)); //why? 结构体的内存

    if(L == NULL){
        printf("fail");
        return L;
    }

    // initialize
    memset(L, 0, sizeof(sqlist));
    L->last = -1;

    //return
    return L;
}

