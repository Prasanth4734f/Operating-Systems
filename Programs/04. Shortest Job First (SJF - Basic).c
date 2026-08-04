#include <stdio.h>

int main()
{
    int n;
    int bt[10], p[10];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("Enter Burst Time of P%d: ",i+1);
        scanf("%d",&bt[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j])
            {
                int temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    printf("\nExecution Order:\n");

    for(int i=0;i<n;i++)
    {
        printf("P%d ",p[i]);
    }

    return 0;
}