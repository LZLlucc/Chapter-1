#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxi(int a, int b){
    printf("max = ");
    
    return (a > b) ? a : b;
}

int mini(int a, int b){
    printf("min = ");

    return (a < b) ? a : b; 
}

int sum(int a, int b){
    printf("sum = ");
    
    return a + b;
}

int func(int a, int b, int (*f)(int, int)){
     int result = f(a, b);
     printf("%d", result);
    
}

int main(){
    int a = 10;
    int b = 5;
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        func(a, b, maxi);
        break;
    
    case 2:
        func(a, b, mini);
        break;
    
    case 3:
        func(a, b, sum);
        break;
    }  
    fgets
    return 0;
       
}