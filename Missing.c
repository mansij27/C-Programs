// Missing no in array 

#include<stdio.h>
int main(){

    int n=0, i;
    int a[n-1];
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=1; i<n; i++){
        scanf("%d", &a[i]);
    }

    int totalSum = (n* (n + 1)) / 2;
    int currentSum = 0;

    for (i = 1; i < n; i++)
    {
        currentSum += a[i];
    }
    printf("Missing number is: %d" , totalSum-currentSum);
    return 0;
}