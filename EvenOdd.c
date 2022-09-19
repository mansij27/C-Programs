//Even and odd seperate in 2 arrays

#include<stdio.h>
int main() {

    int a[10], i, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("\nEven numbers of the array are \n");
     for(i=0; i<n; i++){
        if(a[i]%2==0){
            printf("%d \t",a[i]);
        }
    }
    printf("\nOdd numbers of the array are \n");
     for(i=0; i<=n; i++){
        if (a[i]%2==1){
            printf("%d \t",a[i]);
        }
    }
}