#include<stdio.h>
int main(){

    int i, j, a[3][3], b[3][3], flag;
    printf("Enter first matrix elements");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            if(i==j && a[i][j]==1){
                flag =1;
            }
            else if(i !=j && a[i][j]==0){
                flag =0;
            }
        }
    } 
    
	if (flag == 1)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}

}