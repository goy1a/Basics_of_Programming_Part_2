#include "lab_10.h"
#include <stdio.h>

int strlength(const char *myStr);
int sum(int n);

void lab_10(){
    // 3
    int number;
    scanf("%d" , &number);

    int array[10];
    int count = 0, i;

    int element = number;
    while(number){
        array[count++] = number % 10;
        number /= 10;
    }

    for ( i = 0; i < 4; ++i)
        printf("%d ", array[i]);
    printf("\n");

    // 4
    printf("%d\n" , sum(element));

}

int sum(int n){
    if (n % 10 == 0){
        return 0;
    }
    else{
        return sum(n / 10) + (n % 10);
    }
}