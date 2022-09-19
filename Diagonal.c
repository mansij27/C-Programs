// Sum of right and left diagonal
#include<stdio.h>

int main(){
    int i, j, a[3][3], sum=0, sum2=0, n, m=0;
    printf("Enter matrix elements: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // left diagonal logic
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            if (i==j) sum= sum+a[i][j];
        }
    }
    // Printing left sum
    printf("\nThe elements of the matrix are :\n");
    for (int i = 0; i <=2; ++i)
        for (int j = 0; j <=2 ; ++j) {
            printf(" %d  ", a[i][j]);
    }
    printf("\n Addition of the left Diagonal elements is :%d\n",sum);

    // Right diagonal logic
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            if (i+j==2) sum2= sum2+a[i][j];
        }
    }

    //Printing the right sum
    for (int i = 0; i <=2; ++i)
        for (int j = 0; j <=2 ; ++j) {
    }
    printf("\n Addition of the right Diagonal elements is :%d\n",sum2);
}
