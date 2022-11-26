#include "lab_6.h"
#include <stdio.h>
#include <stdlib.h>

void mass(int *d, int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", *d++);
        count++;
        if (count > 2) {
            printf("\n");
            count = 0;
        }
    }
}
void lab_6() {
    int n = 4;
    int *array = calloc(n, sizeof(n));
    if (array != NULL) {
        int *d;
        d = array;
        for (int i = 0; i < n; i++) {
            scanf("%d", &*d++);
        }
        mass(array, n);
        free(array);
    }
}