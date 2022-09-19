// #include<stdio.h>
// int main() {

//     int a[10], i, j, n;
//     printf("Enter the array size: ");
//     scanf("%d", &n);
//     printf("Enter the array elements: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     printf("Duplicate element in array is: ");
//     for(i = 0; i < n; i++){
//          for(j=i+1; j < n; j++){
   
//            if(a[i] == a[j]){
    
//             printf(" %d ",a[i]);
//             break;
//             }
//         }
//       }
    
//       return 0;

// }

#include<stdio.h>
int main(){
   int a[50],i,j,k, count = 0, dup[50], number;
   printf("Enter size of the array\n");
   scanf("%d",&number);
   printf("Enter Elements of the array:\n");
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   printf("Entered element are: \n");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
   for(i=0;i<number;i++){
      for(j = i+1; j < number; j++){
         if(a[i] == a[j]){
            for(k = j; k <number; k++){
               a[k] = a[k+1];
            }
            j--;
            number--;
         }
      }
   }
   printf("\nAfter deleting the duplicate element the Array is:\n");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
}