#include <stdio.h>

char *func(char *p){
    return p;
}

int main(){
    char *p = "hello";
    char *q = func(p);
    printf("%s", q);
    return 0;
}