#include<stdio.h>

int main(){
    int i, j, k, a[3][3], b[3][3], r[3][3];
    printf("Enter first matrix elements: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Multiplication of given two matrices is:\n\n");
 
    for (int i = 0; i <=2; i++) {
        for (int j = 0; j <=2; j++) {
            r[i][j] = 0;
 
            for (int k = 0; k <=2 ; k++) {
                r[i][j] += a[i][k] * b[k][j];
            }
 
            printf("%d\t", r[i][j]);
        }
    }
}