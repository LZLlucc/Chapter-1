#include <stdio.h>

int main() {

    int arr[10] = {10, 45, 23, 78, 90, 34, 56, 21, 67, 89};

    int average;
    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 10; i++) {
        sum +=arr[i];
        
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    average = sum / 10;

    printf("the sum is %d\n", sum);
    printf("the average is %d\n", average);
    printf("the maximum is %d\n", max);
    printf("the minimum is %d\n", min);


    return 0;
}