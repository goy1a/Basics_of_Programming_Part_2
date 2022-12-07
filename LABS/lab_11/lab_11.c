#include "lab_11.h"
#include <stdio.h>

void lab_11(){
    NewStruct();
    printStruct();
}

void printStruct() {
    struct Circle a;
    printf("Радиус: %f\n" , a.radius);
    printf("Диаметр: %f\n" , a.diameter);
    printf("Длина дуги: %f\n" , a.circle_length);
    printf("Площадь: %f\n" , a.square);

}

void NewStruct() {
    struct Circle al;
    float pi , r;
    printf("Введите число pi: ");
    scanf("%f" ,  &pi);
    printf("Введите радиус: ");
    scanf("%f/n" ,  &r);
    al.pi = pi;
    al.radius = r;
    al.diameter = al.radius * 2;
    al.circle_length = circles(al);
    al.square = square(al);

}

float circles(struct Circle al) {
    return 2*al.pi*al.radius;
}

float square(struct Circle al) {
    return al.radius *al.radius *al.pi;
}
