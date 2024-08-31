#include <stdio.h>


int maxi(int a, int b){
    int c;
    if (a < b){
        c = b;
    }
    c = a;
    printf("max = ");
    return c;
}

int main(){
    int a = 10;
    int b = 5;
    int c = 
    c = maxi(a, b);
    printf("%d", c);
    return 0;
}