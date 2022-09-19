#include<stdio.h>
void main() {

    int n, a[10], i, search, low, high, mid;
    printf("Enter array size");
    scanf("%d", &n);
    printf("Enter array elements");
    for (i=0;i<n; i++)
        scanf("%d", &a[i]);
    printf("Array Elements are");
    for (i=0; i<n;i++)
        printf("%d\n", a[i]);

    printf("Element to search");
    scanf("%d", &search);

    low=0;
    high=n-1;
    mid=(low+high)/2;

    while (low <= high) {
        if (a[mid] < search)
            low = mid + 1;
        else if (a[mid] == search) {
            printf("%d found at location %d.\n", search, mid+1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high)/2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list", search);
    
    
}