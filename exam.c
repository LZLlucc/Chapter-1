/**********************************************************************
 * 1. 定义结构体，并设置别名为 User
 * 2. 结构体成员如下：
 *    字符串类型的 name
 *    unsigned int 类型的 age
 * 3. 定义长度为5的数组，元素的类型是User
 * 4. 将以下内容为数组中的数据
 *    Jack  18
 *    Tom   29
 *    Tony  26
 *    Mary  41
 *    Annie 22
 * 5. 通过程序找出年龄最大的用户
 * 6. 请计算所有用户的平均年龄
**********************************************************************/


typedef struct{
    char *name;
    unsigned age;
}User;

User *ageMaxUser(User *p);
double ageAverge(User user[], int n);

#include <stdio.h>

int main(){
    User user[5] = {{"Jack", 18}, {"Tom", 29}, {"Tony", 26}, {"Mary", 41}, {"Annie", 22}};

    User *p = ageMaxUser(user);
    double avg = ageAverge(user, 5);

    User *q = user;
    printf("%s\n", q->name);

    //printf("年龄最大的用户是 %s, %d\n", p->name, p->age);
    printf("用户平均年龄是: %.2lf\n", avg);
    return 0;
}


double ageAverge(User user[], int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += user[i].age;
    }
    return sum/n;
}

User *ageMaxUser(User *p){
    int ageMax = p->age;
    User *q = p;
    while(p++){
        if(ageMax < p->age){
            ageMax = p->age;
            q = p;
        }
    }
    return q;
}