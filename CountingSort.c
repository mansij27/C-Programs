#include<stdio.h>
int main() {

   int n, a[10], i, max, count[11], output[15];
   printf("Enter array size: ");
   scanf("%d", &n);
   printf("Enter array elements: ");
   for (i=0; i<n; i++){
      scanf("%d", &a[i]);
   }
   max= a[0];
   for(i=1; i<n; i++){
      if(a[i] > max) { 
         max = a[i];  
         }
   }
      return max;
   
   for (int i = 0; i <= max; ++i) {
      count[i] = 0;
   }

   for (int i = 0; i < n; i++) {
      count[a[i]]++;
   }

   for (int i = 1; i <= max; i++) {
      count[i] += count[i - 1];
   }

   for (int i = n- 1; i >= 0; i--) {
      output[count[a[i]] - 1] = a[i];
      count[a[i]]--;
   }

   for (int i = 0; i < n; i++) {
      a[i] = output[i];
   }

   printf("Elements after sorting: ");
      for(int i = 0; i < n; ++i) {
         printf("%d\n", a[i]);
      }
}
//  count=max+1;
 
