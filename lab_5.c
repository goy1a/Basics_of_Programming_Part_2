#include "lab_5.h"
#include "stdio.h"

int multi_matrix(int x, int **matr1, int **matr2)
{
    int mulit_matrix[x][x];
    for (int i=0; i < x; i++){
        for (int j=0; j < x; j++){
            mulit_matrix[i][j]=0;
            for (int m=0; m < x; m++){
                mulit_matrix[i][j]= mulit_matrix[i][j] + matr1[i][m] * matr2[m][j];
            }
        }
    }
    return ;
}


void lab_5()
{
    const int N = 9;
    int mass[N] = {12, 13, 14, 15, 16, 17, 18, 19, 20};

    for(int i = 0; i < N-2; i+=3) {
        printf("%i %i %i \n", mass[i], mass[i+1], mass[i+2]);
    }
    int x;
    scanf("%d",&x);
    int matr1[x][x], matr2[x][x];
    for (int i=0; i < x; i++){
        for (int j=0; j < x; j++){
            scanf("%d", &matr1[i][j]);
        }
    }
    for (int i=0; i < x; i++){
        for (int j=0; j < x; j++){
            scanf("%d", &matr2[i][j]);
        }
    }

    for (int i=0; i < x; i++){
        for (int j=0; j < x; j++){
            printf("%d%c", multi_matrix(), ' ');
        }
        printf(" \n");
    }
}