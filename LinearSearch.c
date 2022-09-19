#include<stdio.h>
void main(){

int n, search, i;
int a[5];
printf("Enter the array size");
scanf("%d", &n);
printf("Enter the array elements");
    for(i=0; i<n; i++){
    scanf("%d", &a[i]);  
    }
printf("Array elements are:");
    for (i=0; i<n; i++){
    printf("%d\n", a[i]);
    }

printf("Element to search");
scanf("%d", &search);
        for (i=0; i<n; i++){
            if(search==a[i]){
             printf("Element is present at a location %d", i);
             break;
            }
        }
        if(i==n){
            printf("not found");
        }


}