// Frequency count

#include<stdio.h>
int main(){
    int n, i, j, a[10], count, max, freq[15];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
        // freq[i] = -1;
    }
    
    for (i = 0; i <n; ++i) {
      count = 1;
      for (j=i+1; j<n; j++) {
          if (a[i]==a[j]){
              count++;
              freq[j]=0;
          }
      }
      if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }

    return 0;

}