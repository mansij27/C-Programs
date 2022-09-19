#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,  n, *ptr;
    printf("Enter size");
    scanf("%d", &n);
    ptr= (int *)malloc(n * sizeof (int));
    for (i=0; i<n; i++){
        scanf("%d", &ptr+i);
    }
    for (i=0; i<n; i++){
        printf("%d", *(ptr+i));
    }
    if (ptr == NULL){
        return 0;
    }
    else{
        return 1;
    }
}