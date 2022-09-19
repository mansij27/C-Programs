// Find Unique elements in array 

#include<stdio.h>
void main(){

    int n, i, j, a[10], count ;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        if(a[i] == a[j] && i != j)
        break;
      }

      if(j == n ){
        printf("\nunique elements in an array is: %d  \n",a[i]);
        ++count;
      }
   }
}