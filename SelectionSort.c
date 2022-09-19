#include<stdio.h>
void main() {

 int n, i, j, a[10], min, temp;
 printf("Enter array size: ");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for (i=0; i<n; i++){
    scanf("%d", &a[i]);
 }
    for (i=0; i<n-1; i++){
        min=i;
        for (j=i+1; j<n; j++){
            if (a[min] > a[j])
                min=j;
            }
        if(min!=i){
            temp=a[i];
            a[i]= a[min];
            a[min]= temp;
        }
        //     min=0;
        }
        printf("Elements after sorting: ");
        for(int i = 0; i < n; ++i) 
            printf("%d\n", a[i]);
        
}