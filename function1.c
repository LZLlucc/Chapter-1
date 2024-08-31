#include <stdio.h>  
  
char *del_space(char *s) {  
    char *r = s; // 保存原始字符串的起始地址  
    char *p = s; // p 指针用于构建没有空格的新字符串（在原字符串上就地修改）  
  
    while (*s) { // 遍历字符串直到 '\0'  
        if (*s != ' ') { // 如果当前字符不是空格  
            *p = *s; // 将非空格字符复制到 p 指向的位置  
            p++; // 移动 p 指针到下一个位置  
        }  
        s++; // 无论是否复制字符，都移动 s 指针到下一个位置  
    }  
    *p = '\0'; // 在新字符串的末尾添加字符串终结符  
  
    return r; // 返回原始字符串（或视为没有空格的新字符串的起始地址）  
}  
  
int main() {  
    char str[] = "Hello, world!";  
    char *result = del_space(str);  
    printf("%s\n", result); // 输出: Hello,world!  
    return 0;  
}