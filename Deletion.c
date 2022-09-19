#include<stdio.h>
void main() {

 int n, a[10], i, pos;
 printf("Enter array size: ");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for(i=0; i<n; i++)
    scanf("%d", &a[i]);
 printf("Position which you want to delete: ");
 scanf("%d", &pos);
 for (i = pos-1; i < n-1; i++)
 {
    a[i] = a[i+1];
 }
 n--;
 for(i=0; i<n; i++){
    printf("%d\n", a[i]);
 }

}