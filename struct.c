#include <stdio.h>  

typedef struct {  
    char *name;  
    int age;  
    char gender;  
    char *tel;  
    char *mail;  
    int nu; // 假设这是存储位置或其他信息的整数  
} Customer;  

int main() {  
    Customer customer_array[100]; // 假设的数组  
    Customer *p = customer_array; // 指向数组的指针  
    Customer *q = malloc(sizeof(Customer)); // 分配新的Customer结构体  
    int pos = 0; // 假设的位置索引  

    printf("please input information:");  
    scanf("%99s %d %c %19s %99s", q->name, &q->age, &q->gender, q->tel, q->mail);  
    // 注意：这里使用了%99s和%19s来限制读取的字符数，防止溢出  

    q->nu = pos;  
    p[pos] = *q; // 直接赋值，无需解引用*q  

    free(q); // 释放之前分配的内存  
    return 0;  
}