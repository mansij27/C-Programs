#include<stdio.h>

int main(){
    int i, j, a[3][3], t[3][3];

    printf("Enter matrix elements: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //transposing
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            t[j][i]=a[i][j] ;
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i <=2; ++i)
    for (int j = 0; j <=2 ; ++j) {
    printf("%d  ", t[i][j]);
    }
}