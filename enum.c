#include <stdio.h>

int main()
{
// 定义枚举类型
    enum SEASONS
 {
    SPRING = 100,
    SUMMER = 200,
    AUTUMN = 300,
    WINTER = 40011
 };

// 定义枚举变量
 enum SEASONS season;

// 获取用户输入
 printf("请输入你喜欢的季节: (1. spring, 2. summer, 3. autumn, 4. winter): ");
 scanf("%d", &season);

// 判断
    switch (season)
  {
    case SPRING:
        printf("你喜欢的季节是春天");
        break;
    case SUMMER:
        printf("你喜欢的季节是夏天");
        break;
    case AUTUMN:
        printf("你喜欢的季节是秋天");
        break;
    case WINTER:
        printf("你喜欢的季节是冬天");
        break;
    default:
        printf("你没有选择你喜欢的季节");
 }

 return 0;
}