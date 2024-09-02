#include <stdio.h>
#include <string.h>

struct Person{
    char *name;
    int count;
};

struct Person leader[3] = {{"zhang3", 0}, {"li4", 0}, {"wang5", 0}};

int main(){
    char leader_name[20];
    for (int i = 0; i < 10; i++){
        printf("please input: ");
        scanf("%s", leader_name);
        for (int j = 0; j < 3; j++){
            if (strcmp(leader_name, leader[j].name) == 0){
                leader[j].count ++;
                break;
            }
        }
    }
    printf("\n 统计结果：\n");
    for (int i = 0; i < 3; i++){
        printf("-10%s, %d\n", leader[i].name, leader[i].count);
    
    }
    return 0;
}
