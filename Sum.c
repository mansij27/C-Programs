/* Pair with given sum
Test case {8,7,2,5,3,1}
result- 10
Output{8,2} {7,3} */

#include<stdio.h>
void main(){

    int n, i,j, target=10 ;
    int arr[]=  {7,2,8,2,3,1};

    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (arr[i] + arr[j] == target)
            {
                printf("Pair found (%d, %d)\n", arr[i], arr[j]);
                return ;
            }
        }
    } 
}