#include<stdio.h>

void main(){
int i,j,n,arr[10];
int ele,ind=-1;

printf("Enter the array size: ");
scanf("%d", &n);
printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

// Loop to check repeated element
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                ele= arr[j];
                ind=j;
                break;
            }
        }
        if(ind != -1)
			break;
	}

	if(ind!=-1){
		printf("%d repeated @ %d index\n",ele,ind);
        }
	else{
		printf("There is no repeated element\n");
    }
}