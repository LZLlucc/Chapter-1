#include <stdio.h>  
  
int main() {  
    // 声明变量  
    int num1, num2;  
    char ch1[2];
    char ch2; 
      
    // 获取输入  
    printf("请输入第一个数字：");  
    scanf("%d", &num1);  
    // 消耗换行符  
      
    printf("请输入第二个数字：");  
    scanf("%d", &num2);  
    // 再次消耗换行符  
      
    // printf("请输入一个字符：");  
    // // 这里不需要额外的getchar()，因为用户会知道要输入字符  
    // scanf("%s", ch1); // 注意%c前的空格，它会消耗任何空白字符  
      
    printf("请输入第二个字符：");  
    scanf("%c", &ch2); // 同样，%c前的空格很重要  
  
    // 输出结果（可选）  
    printf("第一个数字是：%d\n", num1);  
    printf("第二个数字是：%d\n", num2);  
    printf("第一个字符是：%s\n", ch1);  
    printf("第二个字符是：%c\n", ch2);  
  
    return 0;  
}