#include<stdio.h>
void main() {
 
 int n, i, a[10], loc, val;
 printf("Enter array size: ");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for(i=0; i<n; i++)
 scanf("%d", &a[i]);
 printf("Enter at which loctaion you want to insert: ");
 scanf("%d", &loc);
 printf("Enter data");
 scanf("%d", &val);
    for(i=n-1; i>=loc-1; i--)
        a[i+1] = a[i];
    a[loc-1] = val;
 printf("Array after insertion: ");
 for(i=0; i<=n; i++)
    printf("%d\n", a[i]);
}