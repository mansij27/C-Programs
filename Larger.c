// Largest and second largest number

#include<stdio.h>
int main() {

    int n=0, a[n], max1, max2, i, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i=0; i<n; i++) 
    {
        scanf("%d", &a[i]);
    }

   max1=a[0];
   max2=a[1];

    if (max1 < max2) 
    {
        temp = max1;
        max1 = max2;
        max2 = temp;
    }
 
    for (int i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }
 
    printf ("The FIRST LARGEST = %d\n", max1);
    printf ("THE SECOND LARGEST = %d\n", max2);
 
    return 0;
}