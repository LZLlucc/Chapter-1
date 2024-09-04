#include<stdio.h>

#define N 100

int digitalCount(char *p) {
    int count = 0;
   for(; *p; p++){
        if (*p >= '0' && *p <= '9')
            count++;
   }
    return count;
}

int main() {
    char strs[N] = "a12bc43h0c22b68o";
    printf("数字字符的个数为 % d个\n", digitalCount(strs)); //8

    return 0;
}