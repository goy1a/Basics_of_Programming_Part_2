#include "lab_9.h"
#include <stdio.h>
#include <stdbool.h>

int strlength(const char *myStr);
bool isPrime(int n);

void lab_9(){
     //task 3
    int n;
    scanf("%d" , &n);
    char *str[] = {"ноль", "один", "два", "три", "четыре" , "пять",
                   "шесть", "семь", "восемь", "девять"};
    printf("%d\n",strlength(str[n]));

    // task 4
    int x;
    scanf("%d" , &x);
    for (int i = 2 ; i<=x ; i++){
        if (isPrime(i)){
            printf("%d " , i);
        }
    }

}
int strlength(const char *myStr){
    int strlength = 0;
        while (myStr[strlength] != '\0'){
            putchar(myStr[strlength]);
            strlength++;
        }

    return strlength;
}


// simple number check
bool isPrime(int n) {
    int d = 2;
    while (d * d <= n) {
        if (n % d == 0) return 0;
        d++;
    }
    return 1;
}