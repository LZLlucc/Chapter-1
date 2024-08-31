#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(int);

    for (int i = 0; i < len / 2; i++){
        int temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }

    for (int i = 0; i < len; i++){
        printf("%d,", a[i]);
    }

    printf("%d", len / 2);
    return 0;
}