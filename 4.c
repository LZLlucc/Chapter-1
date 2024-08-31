#include <stdio.h>

int main() {
    int line1[] = {1, 2, 3, 4};         //声明数组，矩阵的第一行
    int line2[] = {5, 6, 7, 8};         //声明数组，矩阵的第二行
    int line3[] = {9, 10, 11, 12};         //声明数组，矩阵的第三行
    int *p_line[3];              //声明整型指针数组
    p_line[0] = line1;           //初始化指针数组元素
    p_line[1] = line2;
    p_line[2] = line3;
    printf("矩阵:\n");
    for (int i = 0; i < 3; i++) {      //对指针数组元素循环

        for (int j = 0; j < 4; j++) {    //对矩阵每一列循环
            printf("%d\t", p_line[i][j]); //或改为printf("%d\t", *(p_line[i] + j));
        }
        printf("\n");
    }
    return 0;
}


