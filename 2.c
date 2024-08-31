#include <stdio.h>

int main(){

    int a[10] = {5, 4, 6, 8, 9, 0, 1, 2 , 7, 3};
    int max = a[0];
    int min = a[0];
    int sum = 0;

    for (int i = 0; i < 10; i++){
        sum +=a[i];

        if (a[i] > max){
            max = a[i];
        }

        if (a[i] < min){
            min = a[i];
        }
    }

    double avg = (sum - max - min) / 8;
    printf("average = %.2lf\n", avg);
}