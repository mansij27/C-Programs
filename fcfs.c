/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0, atat=0;
    printf("Enter the number of processes");
    scanf("%d", &n);
    printf("Enter the burst time of processes");
    for(i=0; i<n; i++){
        scanf("%d", &bt[i]);
    }
    printf("Enter the waiting time of processes");
    for(i=0; i<n; i++){
        scanf("%d", &wt[i]);
    }
    printf("process\t burst time\t waiting time\t turn around time\n");
    for (i=0; i<n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        for (j=0; j<n; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt= awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n", i+1, bt[i], wt[i], tat[i]);
    }
        awt=awt/n;
        atat=atat/n;
        printf("Average waitimg time= %f\n", awt);
        printf("Average Turn arpund time= %f\n", atat);
        getch();
}
