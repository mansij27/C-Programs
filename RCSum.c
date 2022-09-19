#include<stdio.h>

int main(){
    int i, j, a[3][3];
    printf("Enter matrix elements: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow Sum....\n");
    for(int i=0;i<=2;i++)   
    {
        int rsum=0;
        for(int j=0;j<=2;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("\nSum of elements in row %d is %d\n",i,rsum);
    }
    
    printf("\nColumn Sum....\n");
    for(int i=0;i<=2;i++)
    {
        int csum=0;
        for(int j=0;j<=2;j++)
        {
            csum=csum+a[j][i];
        }
        printf("\nSum of elements in column %d is %d\n",i,csum);
    }
}