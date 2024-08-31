#include <stdio.h>

int main()
    double a = 1.0, b = 0.9;  
    printf("%.30lf", a - b);
    printf("%.30lf", 0.1);
    if ((a - b) == 0.1){
        printf("true");
    }
    else{
        printf("False");
    }
    return 0;
}