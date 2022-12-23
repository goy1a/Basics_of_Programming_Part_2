#include "lab_7.h"
#include <stdio.h>
#include <math.h>

struct Circle {
    float r;
    double pi;
};

float Square(struct Circle *ci){
    ci.r = pow(ci.r,2);
    return ci.pi * ci.r;
    }


void lab_7(){
    enum cars {
        Passenger,
        Bus,
        Truck,
        Race,
        Sedan,
        Limousine,
        Supercar
    };
    enum cars a ;
    a = Bus;
    printf("%d\n" , a);

    struct Circle Alfa;
    Alfa.r = 2;
    Alfa.pi = 3.14;
    float square = Square(Alfa);
    printf("%f\n" , square);

    union {
    int x;
    struct {
        int NumLock : 2;
        int CapsLock : 3;
        int ScrollLock : 4;
        };
    } condition;

    scanf("%X", &condition.x);

    condition.NumLock ? printf("Вкл\n") : printf("Выкл\n");
    condition.CapsLock ? printf("Вкл\n") : printf("Выкл\n");
    condition.ScrollLock ? printf("Вкл\n") : printf("Выкл\n");
}
