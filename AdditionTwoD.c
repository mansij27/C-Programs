#include<stdio.h>
void main(){

    int i, j, n, a[3][3], b[3][3], sum[3][3];
    printf("Enter first 3*3 matrix elements ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
        scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second 3*3 matrix elements");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
        scanf("%d", &b[i][j]);
        }
    }

    printf("Addition of matrix\n");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            sum[i][j]= a[i][j] +b[i][j];
            printf("%d  ", sum[i][j]);
        }
    }

    printf("\n Subtraction of matrix\n");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            sum[i][j]= a[i][j] - b[i][j];
            printf("%d  ", sum[i][j]);
        }
    }
}
