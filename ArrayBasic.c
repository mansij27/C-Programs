#include<stdio.h>
void main(){

int i,n,marks[10];
printf("Enter the array size");
scanf("%d", &n);
printf("Enter the array elements");
    for(i=0; i<n; i++){
        scanf("%d", &marks[i]);
       
    }
 printf("Array elements are");
   for(int i = 0; i < n; i++) {
     printf("%d\n", marks[i]);
  }
}

