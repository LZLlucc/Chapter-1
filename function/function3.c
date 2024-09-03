#include <stdio.h>

int main(){
    char *p[3] = {"hello", "akg", "my"};
    int a[3] = {6, 4, 3};

    for (int i = 0; i < 13; i++){
        if (*(*p + i) == '\0'){
            printf("0");
        }
        printf("%c  %p\n", *(*p + i), *(*p + i));

    }
    printf("\n");

    char b[] = "hello";
    for (int i = 0; i < 6; i++){
        if (*(*p + i) == '\0'){
            printf("0");
        }
        printf("%c  %p\n", b[i], &b[i]);

    }
    printf("\n");
    
    char *q = "hello";
    for (int i = 0; i < 6; i++){
        if (*(*p + i) == '\0'){
            printf("0");
        }
        printf("%c  %p\n", *(*p + i), *(*p + i));

    }

    return 0;
}